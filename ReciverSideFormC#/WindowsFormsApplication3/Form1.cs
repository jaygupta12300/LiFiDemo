using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO;
using System.IO.Ports;
namespace WindowsFormsApplication3
{
    public partial class Form1 : Form
    {
        public string strFileName = "";
        public static System.IO.Ports.SerialPort serialPort1;
        private delegate void LineReceivedEvent(string line);
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
        private void button1_Click(object sender, EventArgs e)
        {

        }

        private void btnConnect_Click_1(object sender, EventArgs e)
        {
            
            System.ComponentModel.IContainer components = new System.ComponentModel.Container();
            serialPort1 = new System.IO.Ports.SerialPort(components); // Creating the new object.
            serialPort1.PortName = "COM" + numCom.Value.ToString(); // Setting what port number.
            serialPort1.BaudRate = 9600; // Setting baudrate.
            serialPort1.DtrEnable = true; // Enable the Data Terminal Ready
            serialPort1.Open(); // Open the port for use.
            btnConnect.Text = "Connected.";
            btnConnect.Enabled = false;
            numCom.Enabled = false;
        }

        private void btnSelect_Click(object sender, EventArgs e)
        {
            lblSucceed.Visible = false;
            OpenFileDialog fd = new OpenFileDialog();
            // string strFileName = null;

            fd.Title = "Open File Dialog";
            fd.InitialDirectory = "C:\\";
            fd.Filter = "All files (*.*)|*.*|All files (*.*)|*.*";
            fd.FilterIndex = 2;
            fd.RestoreDirectory = true;

            if (fd.ShowDialog() == DialogResult.OK)
            {
                strFileName = fd.FileName;
                lblFileName.Text = lblFileName.Text + strFileName;
            }
        }
        private void btnSend_Click(object sender, EventArgs e)
        {
            try
            {

                // Sends the text as a byte.
                //  serialPort1.Write(new byte[] { Convert.ToByte(txtDatasend.Text) }, 0, 1);
                string text = System.IO.File.ReadAllText(strFileName);
                serialPort1.Write(text);
            }
            catch (Exception exc)
            {
                Console.WriteLine("Exception caught in process: {0}", exc.ToString());
            }
        }

        private void numCom_ValueChanged(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
