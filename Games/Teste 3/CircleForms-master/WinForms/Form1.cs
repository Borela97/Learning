using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;



namespace WinForms
{
    public partial class Form1 : Form
    {
        private Timer _timer;
        private double _radian;
        private double _cos;
        private double _sin;
        private double _tan;
        private Circle _circle;
        private Line _line;
        private Line _xAxis;
        private Line _yAxis;
        private float _zoom;

        private float _actualXOrigim = 0;
        private float _actualYOrigim = 0;


        public Form1()
        {


            InitializeComponent();
            initializeTimer();
            initializeUnitCircle();

            _actualXOrigim =  this.ClientRectangle.Width / 2;
            _actualYOrigim = this.ClientRectangle.Height / 2;

            this.DoubleBuffered = true;
            _zoom = 1;
            this.MouseWheel += new MouseEventHandler(this.pictureMouseWheel);

            this.KeyDown += textBox1_KeyDown;


            _line = new Line() { Start = new PointF { X = 0, Y = 0 }, End = new PointF { X = 200, Y = 200 }, Color = Color.Black };

        }


        private void textBox1_KeyDown(object sender, System.Windows.Forms.KeyEventArgs e)
        {
            switch (e.KeyCode)
            {
                case Keys.Up:
                    _actualYOrigim += 10;
                    break;
                case Keys.Down:
                    _actualYOrigim -= 10;
                    break;
                case Keys.Left:
                    _actualXOrigim += 10;
                    break;
                case Keys.Right:
                    _actualXOrigim -= 10;
                    break;
            }  
        }




        private void initializeTimer()
        {
            _timer = new Timer();
            _timer.Interval = 16;
            _timer.Tick += timerTick;
            _timer.Start();
        }

        private void initializeUnitCircle()
        {
            _xAxis = new Line()
            {
                Start = new PointF { X = -this.ClientRectangle.Width, Y = 0 },
                End = new PointF { X = this.ClientRectangle.Width, Y = 0 },
                Color = Color.Blue
            };
            _yAxis = new Line()
            {
                Start = new PointF { X = 0, Y = -this.ClientRectangle.Height },
                End = new PointF { X = 0, Y = this.ClientRectangle.Height },
                Color = Color.Red
            };
            _circle = new Circle() { Position = new PointF { X = 0, Y = 0 }, Radius = 200 };
            
        }


        private void timerTick(object sender, EventArgs e)
        {
            _radian += 0.01;

            if (_radian >= Math.PI * 2)
                _radian -= Math.PI * 2;

            _cos = Math.Cos(_radian);
            _sin = Math.Sin(_radian);
            _tan = Math.Tan(_radian);

            _line.End = new PointF() { X = (float)(_cos * _circle.Radius), Y = (float)(_sin * _circle.Radius) };
            this.Invalidate();
        }



        private double reflect(double value)
        {
            return value * -1;
        }

        private double radiansToDegree(double radian)
        {
            return radian * 180 / Math.PI;
        }


        private void Form1_Paint(object sender, PaintEventArgs e)
        {

            //statics 


           e.Graphics.TranslateTransform(_actualXOrigim, _actualYOrigim); //this set point x and y in center.

            GraphicsState transState = e.Graphics.Save();

            //mutable



            drawValues(e.Graphics);
            e.Graphics.ScaleTransform(1F, -1F);
            e.Graphics.ScaleTransform(_zoom, _zoom);
            _xAxis.Draw(e.Graphics);
            _yAxis.Draw(e.Graphics);
            _circle.Draw(e.Graphics);
            _line.Draw(e.Graphics);
            e.Graphics.Restore(transState);

            if(_zoom != 1)
            {
                //e.Graphics.TranslateTransform(_actualXOrigim, _actualYOrigim);
            }




        }



        private void drawValues(Graphics g)
        {
            string format = $"angle = {radiansToDegree(_radian):0} | cos = {_cos:0.###} | sen = {_sin:0.###} | tan = {_tan:0.###}";

            g.DrawString(format, this.Font, System.Drawing.Brushes.Red, (float)_circle.Position.X, (float)reflect(_circle.Radius + (Font.Size * 2)));
        }

        private void Clear(PaintEventArgs e)
        {
            e.Graphics.Clear(Color.White);
        }


        private void pictureMouseWheel(object sender, MouseEventArgs e)
        {
            if(e.Delta > 0 && _zoom * (float)1.25 != 0)
            {
                _zoom *= (float)1.25;
            }
            else if (e.Delta < 0 && _zoom / (float)1.25 != 0)
            {
                _zoom /= (float)1.25;
            }
        }
    }





}



