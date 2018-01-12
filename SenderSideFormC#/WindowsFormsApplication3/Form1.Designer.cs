namespace WindowsFormsApplication3
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.numCom = new System.Windows.Forms.NumericUpDown();
            this.btnConnect = new System.Windows.Forms.Button();
            this.btnSelect = new System.Windows.Forms.Button();
            this.lblFileName = new System.Windows.Forms.Label();
            this.btnSend = new System.Windows.Forms.Button();
            this.lblSucceed = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.numCom)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(13, 13);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(106, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Connection Manager";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(13, 35);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(34, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "COM:";
            this.label2.Click += new System.EventHandler(this.label2_Click);
            // 
            // numCom
            // 
            this.numCom.Location = new System.Drawing.Point(53, 33);
            this.numCom.Name = "numCom";
            this.numCom.Size = new System.Drawing.Size(32, 20);
            this.numCom.TabIndex = 2;
            this.numCom.ValueChanged += new System.EventHandler(this.numCom_ValueChanged);
            // 
            // btnConnect
            // 
            this.btnConnect.Location = new System.Drawing.Point(16, 61);
            this.btnConnect.Name = "btnConnect";
            this.btnConnect.Size = new System.Drawing.Size(75, 23);
            this.btnConnect.TabIndex = 3;
            this.btnConnect.Text = "Connect!";
            this.btnConnect.UseVisualStyleBackColor = true;
            this.btnConnect.Click += new System.EventHandler(this.btnConnect_Click_1);
            // 
            // btnSelect
            // 
            this.btnSelect.Location = new System.Drawing.Point(16, 90);
            this.btnSelect.Name = "btnSelect";
            this.btnSelect.Size = new System.Drawing.Size(75, 23);
            this.btnSelect.TabIndex = 4;
            this.btnSelect.Text = "Select File";
            this.btnSelect.UseVisualStyleBackColor = true;
            this.btnSelect.Click += new System.EventHandler(this.btnSelect_Click);
            // 
            // lblFileName
            // 
            this.lblFileName.AutoSize = true;
            this.lblFileName.Location = new System.Drawing.Point(13, 132);
            this.lblFileName.Name = "lblFileName";
            this.lblFileName.Size = new System.Drawing.Size(71, 13);
            this.lblFileName.TabIndex = 5;
            this.lblFileName.Text = "Selected File:";
            // 
            // btnSend
            // 
            this.btnSend.Location = new System.Drawing.Point(16, 169);
            this.btnSend.Name = "btnSend";
            this.btnSend.Size = new System.Drawing.Size(75, 23);
            this.btnSend.TabIndex = 6;
            this.btnSend.Text = "Send";
            this.btnSend.UseVisualStyleBackColor = true;
            this.btnSend.Click += new System.EventHandler(this.btnSend_Click);
            // 
            // lblSucceed
            // 
            this.lblSucceed.AutoSize = true;
            this.lblSucceed.Location = new System.Drawing.Point(13, 217);
            this.lblSucceed.Name = "lblSucceed";
            this.lblSucceed.Size = new System.Drawing.Size(54, 13);
            this.lblSucceed.TabIndex = 7;
            this.lblSucceed.Text = "File Sent..";
            this.lblSucceed.Visible = false;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(306, 319);
            this.Controls.Add(this.lblSucceed);
            this.Controls.Add(this.btnSend);
            this.Controls.Add(this.lblFileName);
            this.Controls.Add(this.btnSelect);
            this.Controls.Add(this.btnConnect);
            this.Controls.Add(this.numCom);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.numCom)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.NumericUpDown numCom;
        private System.Windows.Forms.Button btnConnect;
        private System.Windows.Forms.Button btnSelect;
        private System.Windows.Forms.Label lblFileName;
        private System.Windows.Forms.Button btnSend;
        private System.Windows.Forms.Label lblSucceed;
    }
}

