// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer;

final class e implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final java.lang.String b;
    final com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller c;

    // Methods
    e(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0, String p1, String p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    public final void run()
    {
      android.view.View v1;
      android.widget.Toast v2;
      v1 = this.c.getLayoutInflater().inflate(2130903063, (android.view.ViewGroup)this.c.findViewById(2131427417));
      ((android.widget.TextView)v1.findViewById(2131427421)).setText(this.a);
      if ( this.b != null )
        ((android.widget.TextView)v1.findViewById(2131427420)).setText(this.b);
      v2 = new android.widget.Toast(this.c.getApplicationContext());
      v2.setGravity(17, 0, 0);
      v2.setDuration(1);
      v2.setView(v1);
      v2.show();
    }

}
