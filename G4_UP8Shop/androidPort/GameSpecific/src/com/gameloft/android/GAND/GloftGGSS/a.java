// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.os.Build;
final class a implements android.widget.SeekBar.OnSeekBarChangeListener {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.ColorCorrector a;

    // Methods
    a(com.gameloft.android.GAND.GloftGGSS.ColorCorrector p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onProgressChanged(android.widget.SeekBar p0, int p1, boolean p2)
    {
      switch ( this.a.m )
      {
        case 0:
          this.a.n[0][0] = (float)p0.getProgress() / 100.0f;
          this.a.f.setText("hue= " + this.a.n[0][0]);
          break;
        case 1:
          this.a.n[1][0] = (float)p0.getProgress() / 100.0f;
          this.a.f.setText("sat.r= " + (this.a.n[1][0] - 1.0f));
          break;
        case 2:
          this.a.n[2][0] = (float)p0.getProgress() / 100.0f;
          this.a.f.setText("lum.r= " + (this.a.n[2][0] - 1.0f));
          break;
        case 3:
          this.a.n[3][0] = (float)p0.getProgress() / 100.0f;
          this.a.f.setText("brig.r= " + (this.a.n[3][0] - 1.0f));
          break;
        case 4:
          this.a.o = (float)p0.getProgress() / 100.0f;
          this.a.f.setText("brig= " + this.a.o);
          break;
        default:
          return;
      }
    }

    public final void onStartTrackingTouch(android.widget.SeekBar p0)
    {
      ;
    }

    public final void onStopTrackingTouch(android.widget.SeekBar p0)
    {
      float[] v2;
      float[] v3;
      float[] v4;
      float[] v5;
      java.io.BufferedWriter v6;
      v2 = new float[3];
      v2[0] = Float.parseFloat(this.a.a.format(this.a.n[0][0]));
      v2[1] = Float.parseFloat(this.a.a.format(this.a.n[0][1]));
      v2[2] = Float.parseFloat(this.a.a.format(this.a.n[0][2]));
      v3 = new float[3];
      v3[0] = Float.parseFloat(this.a.a.format(this.a.n[1][0]));
      v3[1] = Float.parseFloat(this.a.a.format(this.a.n[1][1]));
      v3[2] = Float.parseFloat(this.a.a.format(this.a.n[1][2]));
      v4 = new float[3];
      v4[0] = Float.parseFloat(this.a.a.format(this.a.n[2][0]));
      v4[1] = Float.parseFloat(this.a.a.format(this.a.n[2][1]));
      v4[2] = Float.parseFloat(this.a.a.format(this.a.n[2][2]));
      v5 = new float[3];
      v5[0] = Float.parseFloat(this.a.a.format(this.a.n[3][0]));
      v5[1] = Float.parseFloat(this.a.a.format(this.a.n[3][1]));
      v5[2] = Float.parseFloat(this.a.a.format(this.a.n[3][2]));
      Float.parseFloat(this.a.a.format(this.a.o));
      try
      {
        v6 = new java.io.BufferedWriter(new java.io.FileWriter(Game.getSDFolder() + "/" + Build.MODEL + "Conf.txt"));
        v6.write(this.a.n[0][0]
               + " "
               + this.a.n[0][1]
               + " "
               + this.a.n[0][2]
               + " "
               + (this.a.n[1][0]
                - 1.0f)
               + " "
               + (this.a.n[1][1]
                - 1.0f)
               + " "
               + (this.a.n[1][2]
                - 1.0f)
               + " "
               + (this.a.n[2][0]
                - 1.0f)
               + " "
               + (this.a.n[2][1]
                - 1.0f)
               + " "
               + (this.a.n[2][2]
                - 1.0f)
               + " "
               + (this.a.n[3][0]
                - 1.0f)
               + " "
               + (this.a.n[3][1]
                - 1.0f)
               + " "
               + (this.a.n[3][2]
                - 1.0f)
               + " "
               + this.a.o);
        v6.close();
        ColorCorrector.nativeApplyChanges();
      }
      catch ( Exception e )
      {
      }
    }

}
