// Decompiled from classes.dex (SourceFile: eq.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.text.TextUtils;
public final class eq {
    // Fields
    private final android.content.Context a;
    private java.lang.String b;
    private final float c;
    private float d;
    private float e;
    private float f;
    private int g;

    // Methods
    public eq(android.content.Context p0)
    {
      super();
      this.g = 0;
      this.a = p0;
      this.c = p0.getResources().getDisplayMetrics().density;
    }

    public eq(android.content.Context p0, String p1)
    {
      this(p0);
      this.b = p1;
    }

    /* synthetic */ static android.content.Context a(com.google.android.gms.internal.eq p0)
    {
      return p0.a;
    }

    private void a()
    {
      StringBuilder v1;
      java.util.Map v2;
      java.util.Iterator v3;
      String v4;
      String v5;
      android.app.AlertDialog.Builder v6;
      if ( TextUtils.isEmpty(this.b) )
      {
        v5 = "No debug information";
      }
      else
      {
        v1 = new StringBuilder();
        v2 = ep.b(new android.net.Uri.Builder().encodedQuery(this.b).build());
        v3 = v2.keySet().iterator();
        while ( v3.hasNext() )
        {
          v4 = (String)v3.next();
          v1.append(v4).append(" = ").append((String)v2.get(v4)).append("\n\n");
        }
        v5 = v1.toString().trim();
        if ( TextUtils.isEmpty(v5) )
          v5 = "No debug information";
      }
      v6 = new android.app.AlertDialog.Builder(this.a);
      v6.setMessage(v5);
      v6.setTitle("Ad Information");
      v6.setPositiveButton("Share", (android.content.DialogInterface.OnClickListener)new com.google.android.gms.internal.eq$1(this, v5));
      v6.setNegativeButton("Close", (android.content.DialogInterface.OnClickListener)new com.google.android.gms.internal.eq$2(this));
      v6.create().show();
    }

    private void a(int p0, float p1, float p2)
    {
      StringBuilder v4 = null;
      java.util.Map v5 = null;
      java.util.Iterator v6 = null;
      String v7 = null;
      String v8 = null;
      android.app.AlertDialog.Builder v9 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( p0 == 0 )
            {
            this.g = 0;
            this.d = p1;
            this.e = p2;
            this.f = p2;
            return;
            }
            if ( this.g == -1 )
            return;
            if ( p0 != 2 )
            {
            if ( p0 == 1 && this.g == 4 )
            {
            if ( TextUtils.isEmpty(this.b) )
            {
            v8 = "No debug information";
            }
            else
            {
            v4 = new StringBuilder();
            v5 = ep.b(new android.net.Uri.Builder().encodedQuery(this.b).build());
            v6 = v5.keySet().iterator();
            while ( v6.hasNext() )
            {
            v7 = (String)v6.next();
            v4.append(v7).append(" = ").append((String)v5.get(v7)).append("\n\n");
            }
            v8 = v4.toString().trim();
            if ( TextUtils.isEmpty(v8) )
            v8 = "No debug information";
            }
            v9 = new android.app.AlertDialog.Builder(this.a);
            v9.setMessage(v8);
            v9.setTitle("Ad Information");
            v9.setPositiveButton("Share", (android.content.DialogInterface.OnClickListener)new com.google.android.gms.internal.eq$1(this, v8));
            v9.setNegativeButton("Close", (android.content.DialogInterface.OnClickListener)new com.google.android.gms.internal.eq$2(this));
            v9.create().show();
            }
            return;
            }
            if ( p2 <= this.e )
            {
            if ( p2 < this.f )
            this.f = p2;
            }
            else
            {
            this.e = p2;
            }
            if ( this.e - this.f > 30.0f * this.c )
            {
            this.g = -1;
            return;
            }
            if ( !(this.g != 0 && this.g != 2) ) { _pc = 1; continue _sm; }
            {
            if ( (this.g == 1 || this.g == 3) && p1 - this.d <= -50.0f * this.c )
            { _pc = 2; continue _sm; }
            }
          case 1:
            if ( !(p1 - this.d >= 50.0f * this.c) ) { _pc = 3; continue _sm; }
            _pc = 2;
            continue _sm;
          case 2:
            this.d = p1;
            ++this.g;
            _pc = 3;
            continue _sm;
          case 3:
            if ( !(this.g == 1 || this.g == 3) ) { _pc = 6; continue _sm; }
            if ( p1 > this.d ) { _pc = 4; continue _sm; } else { _pc = 5; continue _sm; }
          case 4:
            this.d = p1;
            _pc = 5;
            continue _sm;
          case 5:
            _pc = 7;
            continue _sm;
          case 6:
            if ( this.g == 2 && p1 < this.d )
            {
            { _pc = 4; continue _sm; }
            }
            _pc = 7;
            continue _sm;
          case 7:
            return;
        }
      }
}

    public final void a(android.view.MotionEvent p0)
    {
      int HistorySize;
      int i;
      HistorySize = p0.getHistorySize();
      for ( i = 0; i < HistorySize; ++i )
        this.a(p0.getActionMasked(), p0.getHistoricalX(0, i), p0.getHistoricalY(0, i));
      this.a(p0.getActionMasked(), p0.getX(), p0.getY());
    }

    public final void a(String p0)
    {
      this.b = p0;
    }

}
