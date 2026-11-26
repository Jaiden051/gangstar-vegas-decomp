// Decompiled from classes.dex (SourceFile: PlusOneDummyView$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus;

class PlusOneDummyView$c implements com.google.android.gms.plus.PlusOneDummyView$d {
    // Fields
    private android.content.Context a;

    // Methods
    private PlusOneDummyView$c(android.content.Context p0)
    {
      super();
      this.a = p0;
    }

    /* synthetic */ PlusOneDummyView$c(android.content.Context p0, int p1)
    {
      this(p0);
    }

    public final android.graphics.drawable.Drawable a(int p0)
    {
      String v2;
      switch ( p0 )
      {
        case 0:
          v2 = "ic_plusone_small_off_client";
          break;
        case 1:
          v2 = "ic_plusone_medium_off_client";
          break;
        case 2:
          v2 = "ic_plusone_tall_off_client";
          break;
        default:
          v2 = "ic_plusone_standard_off_client";
          break;
      }
      return this.a.getResources().getDrawable(this.a.getResources().getIdentifier(v2, "drawable", this.a.getPackageName()));
    }

    public final boolean a()
    {
      int Identifier;
      int v2;
      int v3;
      int v4; // RETVAL
    
      Identifier = this.a.getResources().getIdentifier("ic_plusone_small_off_client", "drawable", this.a.getPackageName());
      v2 = this.a.getResources().getIdentifier("ic_plusone_medium_off_client", "drawable", this.a.getPackageName());
      v3 = this.a.getResources().getIdentifier("ic_plusone_tall_off_client", "drawable", this.a.getPackageName());
      v4 = this.a.getResources().getIdentifier("ic_plusone_standard_off_client", "drawable", this.a.getPackageName());
      return Identifier != 0 && v2 != 0 && v3 != 0 && v4 != 0;
    }

}
