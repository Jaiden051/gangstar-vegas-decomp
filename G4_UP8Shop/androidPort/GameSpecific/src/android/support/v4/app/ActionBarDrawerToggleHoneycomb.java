// Decompiled from classes.dex (SourceFile: ActionBarDrawerToggleHoneycomb.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.util.Log;
class ActionBarDrawerToggleHoneycomb {
    // Fields
    private static java.lang.String a;
    private static final int[] b;

    // Methods
    static
    {
      int[] v0;
      v0 = new int[1];
      v0[0] = 16843531;
      b = (int[])v0;
    }

    ActionBarDrawerToggleHoneycomb()
    {
      super();
    }

    public static android.graphics.drawable.Drawable getThemeUpIndicator(
            android.app.Activity p0)
    {
      android.content.res.TypedArray v1;
      android.graphics.drawable.Drawable result; // RETVAL
    
      v1 = p0.obtainStyledAttributes(b);
      result = v1.getDrawable(0);
      v1.recycle();
      return result;
    }

    public static Object setActionBarDescription(Object p0, android.app.Activity p1, int p2)
    {
      Object v3;
      android.support.v4.app.h v4;
      android.app.ActionBar ActionBar;
      Object[] v6;
      if ( p0 != null )
        v3 = p0;
      else
        v3 = new android.support.v4.app.h(p1);
      v4 = (android.support.v4.app.h)v3;
      if ( v4.a != null )
      {
        try
        {
          ActionBar = p1.getActionBar();
          v6 = new Object[1];
          v6[0] = Integer.valueOf(p2);
          v4.b.invoke(ActionBar, v6);
          return v3;
        }
        catch ( Exception v8 )
        {
          Log.w("ActionBarDrawerToggleHoneycomb", "Couldn't set content description via JB-MR2 API", v8);
        }
      }
      return v3;
    }

    public static Object setActionBarUpIndicator(
            Object p0,
            android.app.Activity p1,
            android.graphics.drawable.Drawable p2,
            int p3)
    {
      android.support.v4.app.h v4;
      android.support.v4.app.h v5;
      android.app.ActionBar ActionBar;
      Object[] v7;
      Object[] v8;
      if ( p0 != null )
        v4 = (android.support.v4.app.h)p0;
      else
        v4 = new android.support.v4.app.h(p1);
      v5 = (android.support.v4.app.h)v4;
      if ( v5.a != null )
      {
        try
        {
          ActionBar = p1.getActionBar();
          v7 = new Object[1];
          v7[0] = p2;
          v5.a.invoke(ActionBar, v7);
          v8 = new Object[1];
          v8[0] = Integer.valueOf(p3);
          v5.b.invoke(ActionBar, v8);
          return v4;
        }
        catch ( Exception v10 )
        {
          Log.w("ActionBarDrawerToggleHoneycomb", "Couldn't set home-as-up indicator via JB-MR2 API", v10);
        }
      }
      else if ( v5.c != null )
      {
        v5.c.setImageDrawable(p2);
      }
      else
      {
        Log.w("ActionBarDrawerToggleHoneycomb", "Couldn't set home-as-up indicator");
      }
      return v4;
    }

}
