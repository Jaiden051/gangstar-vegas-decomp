// Decompiled from classes.dex (SourceFile: ColorCorrector.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import java.lang.reflect.Array;
public class ColorCorrector {
    // Fields
    public static com.gameloft.android.GAND.GloftGGSS.ColorCorrector r;
    java.text.DecimalFormat a;
    android.widget.RelativeLayout b;
    android.widget.LinearLayout c;
    android.widget.SeekBar d;
    android.widget.TextView e;
    android.widget.TextView f;
    android.widget.SeekBar g;
    android.widget.TextView h;
    android.widget.TextView i;
    android.widget.SeekBar j;
    android.widget.TextView k;
    android.widget.TextView l;
    int m;
    float[][] n;
    float o;
    float p;
    com.gameloft.android.GAND.GloftGGSS.Game q;

    // Methods
    static
    {
      r = new com.gameloft.android.GAND.GloftGGSS.ColorCorrector();
    }

    public ColorCorrector()
    {
      super();
    }

    private static void ColorCorrector()
    {
      ;
    }

    private android.widget.RelativeLayout a()
    {
      return this.b;
    }

    private void a(int p0)
    {
      int v2;
      if ( p0 == 4 )
      {
        if ( this.c.isShown() )
          this.c.setVisibility(8);
        else
          this.c.setVisibility(0);
      }
      else
      {
        if ( p0 == 24 )
          ++this.m;
        if ( p0 == 25 )
          --this.m;
        if ( this.m >= 0 )
          v2 = this.m % 5;
        else
          v2 = 4;
        this.m = v2;
        switch ( this.m )
        {
          case 0:
            this.p = this.n[0][0];
            this.d.setMax(36000);
            this.n[0][0] = this.p;
            this.d.setProgress((int)(this.n[0][0] * 100.0f));
            this.f.setText("hue= " + this.n[0][0]);
            this.p = this.n[0][1];
            this.g.setMax(200);
            this.n[0][1] = this.p;
            this.g.setProgress((int)(this.n[0][1] * 100.0f));
            this.i.setText("sat= " + this.n[0][1]);
            this.p = this.n[0][2];
            this.j.setMax(200);
            this.n[0][2] = this.p;
            this.j.setProgress((int)(this.n[0][2] * 100.0f));
            this.l.setText("lum= " + this.n[0][2]);
            break;
          case 1:
            this.p = this.n[1][0];
            this.d.setMax(200);
            this.n[1][0] = this.p;
            this.d.setProgress((int)(this.n[1][0] * 100.0f));
            this.f.setText("sat.r= " + (this.n[1][0] - 1.0f));
            this.p = this.n[1][1];
            this.g.setMax(200);
            this.n[1][1] = this.p;
            this.g.setProgress((int)(this.n[1][1] * 100.0f));
            this.i.setText("sat.g= " + (this.n[1][1] - 1.0f));
            this.p = this.n[1][2];
            this.j.setMax(200);
            this.n[1][2] = this.p;
            this.j.setProgress((int)(this.n[1][2] * 100.0f));
            this.l.setText("sat.b= " + (this.n[1][2] - 1.0f));
            break;
          case 2:
            this.p = this.n[2][0];
            this.d.setMax(200);
            this.n[2][0] = this.p;
            this.d.setProgress((int)(this.n[2][0] * 100.0f));
            this.f.setText("lum.r= " + (this.n[2][0] - 1.0f));
            this.p = this.n[2][1];
            this.g.setMax(200);
            this.n[2][1] = this.p;
            this.g.setProgress((int)(this.n[2][1] * 100.0f));
            this.i.setText("lum.g= " + (this.n[2][1] - 1.0f));
            this.p = this.n[2][2];
            this.j.setMax(200);
            this.n[2][2] = this.p;
            this.j.setProgress((int)(this.n[2][2] * 100.0f));
            this.l.setText("lum.b= " + (this.n[2][2] - 1.0f));
            break;
          case 3:
            this.p = this.n[3][0];
            this.d.setMax(200);
            this.n[3][0] = this.p;
            this.d.setProgress((int)(this.n[3][0] * 100.0f));
            this.f.setText("brig.r= " + (this.n[3][0] - 1.0f));
            this.p = this.n[3][1];
            this.g.setMax(200);
            this.n[3][1] = this.p;
            this.g.setProgress((int)(this.n[3][1] * 100.0f));
            this.i.setText("brig.g= " + (this.n[3][1] - 1.0f));
            this.p = this.n[3][2];
            this.j.setMax(200);
            this.n[3][2] = this.p;
            this.j.setProgress((int)(this.n[3][2] * 100.0f));
            this.l.setText("brig.b= " + (this.n[3][2] - 1.0f));
            break;
          case 4:
            this.p = this.o;
            this.d.setMax(200);
            this.o = this.p;
            this.d.setProgress((int)(this.o * 100.0f));
            this.f.setText("brig= " + this.o);
            this.g.setMax(0);
            this.g.setProgress(0);
            this.i.setText("Disabled");
            this.j.setMax(0);
            this.j.setProgress(0);
            this.l.setText("Disabled");
            break;
          default:
            return;
        }
      }
    }

    private void a(
            com.gameloft.android.GAND.GloftGGSS.Game p0,
            com.gameloft.android.GAND.GloftGGSS.GL2JNIView p1)
    {
      android.widget.RelativeLayout.LayoutParams v3;
      android.widget.RelativeLayout.LayoutParams v4;
      this.q = p0;
      this.a = new java.text.DecimalFormat(".####");
      this.p = 0.0f;
      this.m = 0;
      this.n = (float[][])Array.newInstance(Float.TYPE, new int[] { 4, 3 });
      this.n[0][0] = Float.intBitsToFloat(0);
      this.n[0][1] = Float.intBitsToFloat(1065353216);
      this.n[0][2] = Float.intBitsToFloat(1065353216);
      this.n[1][0] = Float.intBitsToFloat(1065353216);
      this.n[1][1] = Float.intBitsToFloat(1065353216);
      this.n[1][2] = Float.intBitsToFloat(1065353216);
      this.n[2][0] = Float.intBitsToFloat(1065353216);
      this.n[2][1] = Float.intBitsToFloat(1065353216);
      this.n[2][2] = Float.intBitsToFloat(1065353216);
      this.n[3][0] = Float.intBitsToFloat(1065353216);
      this.n[3][1] = Float.intBitsToFloat(1065353216);
      this.n[3][2] = Float.intBitsToFloat(1065353216);
      this.o = 1.0f;
      this.c = new android.widget.LinearLayout(p0);
      this.c.setOrientation(1);
      this.f = new android.widget.TextView(p0);
      this.f.setText("hue= 0.0");
      this.d = new android.widget.SeekBar(p0);
      this.d.setMax(36000);
      this.d.setProgress(0);
      this.d.setOnSeekBarChangeListener((android.widget.SeekBar.OnSeekBarChangeListener)new com.gameloft.android.GAND.GloftGGSS.a(this));
      this.c.addView(this.d);
      this.c.addView(this.f);
      this.i = new android.widget.TextView(p0);
      this.i.setText("sat= 1.0");
      this.g = new android.widget.SeekBar(p0);
      this.g.setMax(200);
      this.g.setProgress(100);
      this.g.setOnSeekBarChangeListener((android.widget.SeekBar.OnSeekBarChangeListener)new com.gameloft.android.GAND.GloftGGSS.b(this));
      this.c.addView(this.g);
      this.c.addView(this.i);
      this.l = new android.widget.TextView(p0);
      this.l.setText("lum= 1.0");
      this.j = new android.widget.SeekBar(p0);
      this.j.setMax(200);
      this.j.setProgress(100);
      this.j.setOnSeekBarChangeListener((android.widget.SeekBar.OnSeekBarChangeListener)new com.gameloft.android.GAND.GloftGGSS.c(this));
      this.c.addView(this.j);
      this.c.addView(this.l);
      this.b = new android.widget.RelativeLayout(p0);
      v3 = new android.widget.RelativeLayout.LayoutParams(-1, -1);
      v3.addRule(15);
      v3.addRule(14);
      this.b.addView(p1, v3);
      v4 = new android.widget.RelativeLayout.LayoutParams(-1, -2);
      v4.addRule(10);
      v4.addRule(14);
      this.c.setPadding(20, 0, 20, 0);
      this.b.addView(this.c, v4);
    }

    public static com.gameloft.android.GAND.GloftGGSS.ColorCorrector getInstance()
    {
      return r;
    }

    public static native void nativeApplyChanges();

}
