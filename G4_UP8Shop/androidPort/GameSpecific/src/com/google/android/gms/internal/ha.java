// Decompiled from classes.dex (SourceFile: ha.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.util.Log;
public class ha implements android.content.DialogInterface.OnClickListener {
    // Fields
    private final android.app.Activity a;
    private final android.support.v4.app.Fragment b;
    private final android.content.Intent c;
    private final int d;

    // Methods
    public ha(android.app.Activity p0, android.content.Intent p1, int p2)
    {
      super();
      this.a = p0;
      this.b = null;
      this.c = p1;
      this.d = p2;
    }

    public ha(android.support.v4.app.Fragment p0, android.content.Intent p1, int p2)
    {
      super();
      this.a = null;
      this.b = p0;
      this.c = p1;
      this.d = p2;
    }

    public void onClick(android.content.DialogInterface p0, int p1)
    {
      try
      {
        if ( this.c != null && this.b != null )
        {
          this.b.startActivityForResult(this.c, this.d);
        }
        else if ( this.c != null )
        {
          this.a.startActivityForResult(this.c, this.d);
        }
        p0.dismiss();
      }
      catch ( android.content.ActivityNotFoundException e )
      {
        Log.e("SettingsRedirect", "Can't redirect to app settings for Google Play services");
      }
    }

}
