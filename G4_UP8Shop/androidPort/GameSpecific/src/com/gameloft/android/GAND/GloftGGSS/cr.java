// Decompiled from classes.dex (SourceFile: cr.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class cr implements java.lang.Runnable {
    // Fields
    final boolean a;
    final int b;
    final com.gameloft.android.GAND.GloftGGSS.PopUpsViewComponent c;

    // Methods
    cr(com.gameloft.android.GAND.GloftGGSS.PopUpsViewComponent p0, boolean p1, int p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    public final void run()
    {
      int v1;
      android.webkit.WebView v2; // RETVAL
      int v3;
      v1 = 0;
      if ( PopUpsViewComponent.access$100(this.c) )
      {
        v2 = PopUpsViewComponent.access$200(this.c);
        if ( !this.a )
          v1 = 8;
        v2.setVisibility(v1);
        PopUpsViewComponent.access$302(this.c, this.a);
        if ( PopUpsViewComponent.access$200(this.c).getVisibility() != this.b )
        {
          if ( PopUpsViewComponent.access$200(this.c).getVisibility() != 0 )
            v3 = PopUpsManager$ViewState.c.a();
          else
            v3 = PopUpsManager$ViewState.d.a();
          PopUpsBridgeClass.OnViewState(v3);
        }
      }
      else
      {
        PopUpsViewComponent.access$200(this.c).setVisibility(8);
        PopUpsViewComponent.access$302(this.c, false);
        if ( this.b != 8 )
          PopUpsBridgeClass.OnViewState(PopUpsManager$ViewState.c.a());
      }
    }

}
