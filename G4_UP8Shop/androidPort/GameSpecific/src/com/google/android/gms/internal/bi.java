// Decompiled from classes.dex (SourceFile: bi.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.SystemClock;
import android.text.format.Time;
import android.view.MotionEvent;
public final class bi implements com.google.android.gms.internal.bd {
    // Methods
    public bi()
    {
      super();
    }

    private static int a(android.util.DisplayMetrics p0, java.util.Map<String, String> p1, String p2, int p3)
    {
      String v4;
      v4 = (String)p1.get(p2);
      if ( v4 != null )
      {
        try
        {
          return eu.a(p0, Integer.parseInt(v4));
        }
        catch ( NumberFormatException e )
        {
          ev.D("Could not parse " + p2 + " in a video GMSG: " + v4);
        }
      }
      return p3;
    }

    public final void a(com.google.android.gms.internal.ey p0, java.util.Map<String, String> p1)
    {
      String v3;
      com.google.android.gms.internal.cg v4;
      boolean v5;
      boolean v6; // RETVAL
      android.util.DisplayMetrics DisplayMetrics;
      int v8;
      int v9;
      int v10;
      int v11;
      com.google.android.gms.internal.ck v12;
      android.util.DisplayMetrics v13;
      int v14;
      int v15;
      long v16; // RETVAL
      String v17;
      String v18;
      v3 = (String)p1.get("action");
      if ( v3 != null )
      {
        v4 = p0.d();
        if ( v4 != null )
        {
          v5 = "new".equalsIgnoreCase(v3);
          v6 = "position".equalsIgnoreCase(v3);
          if ( v5 || v6 )
          {
            DisplayMetrics = p0.getContext().getResources().getDisplayMetrics();
            v8 = a(DisplayMetrics, p1, "x", 0);
            v9 = a(DisplayMetrics, p1, "y", 0);
            v10 = a(DisplayMetrics, p1, "w", -1);
            v11 = a(DisplayMetrics, p1, "h", -1);
            if ( !v5 || v4.b() != null )
              v4.b(v8, v9, v10, v11);
            else
              v4.c(v8, v9, v10, v11);
          }
          else
          {
            v12 = v4.b();
            if ( v12 != null )
            {
              if ( "click".equalsIgnoreCase(v3) )
              {
                v13 = p0.getContext().getResources().getDisplayMetrics();
                v14 = a(v13, p1, "x", 0);
                v15 = a(v13, p1, "y", 0);
                v16 = SystemClock.uptimeMillis();
                MotionEvent _mv = MotionEvent.obtain(v16, v16, 0, (float)v14, (float)v15, 0);
                v12.a(_mv);
                _mv.recycle();
              }
              else if ( "controls".equalsIgnoreCase(v3) )
              {
                v17 = (String)p1.get("enabled");
                if ( v17 != null )
                  v12.a(Boolean.parseBoolean(v17));
                else
                  ev.D("Enabled parameter missing from controls video GMSG.");
              }
              else if ( "currentTime".equalsIgnoreCase(v3) )
              {
                v18 = (String)p1.get("time");
                if ( v18 != null )
                {
                  try
                  {
                    v12.a((int)(Float.parseFloat(v18) * 1000.0f));
                  }
                  catch ( NumberFormatException e )
                  {
                    ev.D("Could not parse time parameter from currentTime video GMSG: " + v18);
                  }
                }
                else
                {
                  ev.D("Time parameter missing from currentTime video GMSG.");
                }
              }
              else if ( "hide".equalsIgnoreCase(v3) )
              {
                v12.setVisibility(4);
              }
              else if ( "load".equalsIgnoreCase(v3) )
              {
                v12.b();
              }
              else if ( "pause".equalsIgnoreCase(v3) )
              {
                v12.c();
              }
              else if ( "play".equalsIgnoreCase(v3) )
              {
                v12.d();
              }
              else if ( "show".equalsIgnoreCase(v3) )
              {
                v12.setVisibility(0);
              }
              else if ( "src".equalsIgnoreCase(v3) )
              {
                v12.a((String)p1.get("src"));
              }
              else
              {
                ev.D("Unknown video action: " + v3);
              }
            }
            else
            {
              ck.a(p0, "no_video_view", null);
            }
          }
        }
        else
        {
          ev.D("Could not get ad overlay for a video GMSG.");
        }
      }
      else
      {
        ev.D("Action missing from video GMSG.");
      }
    }

}
