// Decompiled from classes.dex (SourceFile: IABDialog.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

public class IABDialog extends android.app.Dialog {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public int g;
    private android.widget.Button[] h;
    private android.widget.ProgressBar i;
    private android.widget.TextView j;
    private android.widget.TextView k;

    // Methods
    static
    {
      a = 0;
      b = 1;
      c = 2;
    }

    private IABDialog(android.content.Context p0, int p1, int p2)
    {
      super(p0, 2131099698);
      this.h = new android.widget.Button[3];
      this.i = null;
      this.j = null;
      this.k = null;
      this.g = -1;
      this.a(p1, p2, -1);
    }

    private IABDialog(android.content.Context p0, int p1, int p2, int p3)
    {
      super(p0, 2131099698);
      this.h = new android.widget.Button[3];
      this.i = null;
      this.j = null;
      this.k = null;
      this.g = -1;
      this.a(p1, p2, p3);
    }

    private android.widget.Button a(int p0)
    {
      if ( p0 <= 2 && p0 >= 0 )
        return this.h[p0];
      else
        return null;
    }

    private com.gameloft.android.GAND.GloftGGSS.iab.IABDialog a(int p0, int p1)
    {
      if ( p0 <= 2 && p0 >= 0 )
      {
        this.h[p0].setVisibility(p1);
        if ( this.h[1].getVisibility() == 4 && this.h[0].getVisibility() == 4 && this.h[2].getVisibility() == 4 )
          this.findViewById(2131427455).setVisibility(8);
        else
          this.findViewById(2131427455).setVisibility(0);
      }
      return this;
    }

    private com.gameloft.android.GAND.GloftGGSS.iab.IABDialog a(
            int p0,
            int p1,
            android.view.View.OnClickListener p2)
    {
      if ( p0 <= 2 && p0 >= 0 )
      {
        if ( p1 > 0 )
          this.h[p0].setText(p1);
        this.h[p0].setOnClickListener(p2);
      }
      return this;
    }

    private com.gameloft.android.GAND.GloftGGSS.iab.IABDialog a(String p0)
    {
      if ( this.k != null )
        this.k.setText(p0);
      return this;
    }

    private void a(int p0, int p1, int p2)
    {
      android.view.ViewGroup.LayoutParams Attributes;
      this.g = p0;
      this.setContentView(2130903069);
      this.k = (android.widget.TextView)this.findViewById(2131427454);
      this.j = (android.widget.TextView)this.findViewById(2131427449);
      if ( p1 > 0 )
        this.k.setText(p1);
      if ( p2 > 0 )
        this.j.setText(p2);
      this.h[0] = (android.widget.Button)this.findViewById(2131427456);
      this.h[1] = (android.widget.Button)this.findViewById(2131427457);
      this.h[2] = (android.widget.Button)this.findViewById(2131427458);
      this.i = (android.widget.ProgressBar)this.findViewById(2131427453);
      this.setCancelable(false);
      if ( p0 == a )
      {
        this.h[1].setOnClickListener((android.view.View.OnClickListener)new com.gameloft.android.GAND.GloftGGSS.iab.e(this));
      }
      else if ( p0 == b )
      {
        this.h[0].setVisibility(0);
        this.h[0].setOnClickListener((android.view.View.OnClickListener)new com.gameloft.android.GAND.GloftGGSS.iab.f(this));
        this.h[1].setVisibility(4);
        this.h[2].setVisibility(0);
      }
      else if ( p0 == c )
      {
        this.h[1].setOnClickListener((android.view.View.OnClickListener)new com.gameloft.android.GAND.GloftGGSS.iab.g(this));
        this.i.setVisibility(0);
      }
      Attributes = this.getWindow().getAttributes();
      Attributes.height = -1;
      Attributes.width = -1;
      this.getWindow().setAttributes((android.view.WindowManager.LayoutParams)Attributes);
    }

    private com.gameloft.android.GAND.GloftGGSS.iab.IABDialog b(int p0)
    {
      if ( this.k != null )
        this.k.setText(p0);
      return this;
    }

    private com.gameloft.android.GAND.GloftGGSS.iab.IABDialog b(String p0)
    {
      if ( this.j != null )
        this.j.setText(p0);
      return this;
    }

    private com.gameloft.android.GAND.GloftGGSS.iab.IABDialog c(int p0)
    {
      if ( this.j != null )
        this.j.setText(p0);
      return this;
    }

    public static com.gameloft.android.GAND.GloftGGSS.iab.IABDialog createDialog(
            android.content.Context p0,
            int p1)
    {
      return new com.gameloft.android.GAND.GloftGGSS.iab.IABDialog(p0, a, p1);
    }

    public static com.gameloft.android.GAND.GloftGGSS.iab.IABDialog createDialog(
            android.content.Context p0,
            int p1,
            int p2)
    {
      return new com.gameloft.android.GAND.GloftGGSS.iab.IABDialog(p0, p1, p2);
    }

    private com.gameloft.android.GAND.GloftGGSS.iab.IABDialog d(int p0)
    {
      this.i.setVisibility(p0);
      return this;
    }

}
