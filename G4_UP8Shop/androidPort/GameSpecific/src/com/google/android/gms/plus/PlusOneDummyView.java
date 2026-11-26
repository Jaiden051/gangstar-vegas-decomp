// Decompiled from classes.dex (SourceFile: PlusOneDummyView.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus;

import android.util.TypedValue;
public class PlusOneDummyView extends android.widget.FrameLayout {
    // Fields
    public static java.lang.String a;

    // Methods
    public PlusOneDummyView(android.content.Context p0, int p1)
    {
      super(p0);
      int v3;
      android.widget.Button v4;
      com.google.android.gms.plus.PlusOneDummyView$d v5;
      android.graphics.Point v6;
      int v7;
      android.util.DisplayMetrics DisplayMetrics;
      v3 = 24;
      v4 = new android.widget.Button(p0);
      v4.setEnabled(false);
      v5 = (com.google.android.gms.plus.PlusOneDummyView$d)new com.google.android.gms.plus.PlusOneDummyView$b(this.getContext(), 0);
      if ( !v5.a() )
        v5 = (com.google.android.gms.plus.PlusOneDummyView$d)new com.google.android.gms.plus.PlusOneDummyView$c(this.getContext(), 0);
      if ( !v5.a() )
        v5 = (com.google.android.gms.plus.PlusOneDummyView$d)new com.google.android.gms.plus.PlusOneDummyView$a(this.getContext(), 0);
      v4.setBackgroundDrawable(v5.a(p1));
      v6 = new android.graphics.Point();
      switch ( p1 )
      {
        case 0:
          v7 = 14;
          break;
        case 1:
          v3 = 32;
          v7 = 20;
          break;
        case 2:
          v3 = 50;
          v7 = 20;
          break;
        default:
          v3 = 38;
          v7 = 24;
          break;
      }
      DisplayMetrics = this.getResources().getDisplayMetrics();
      v6.x = (int)(TypedValue.applyDimension(1, (float)v3, DisplayMetrics) + 0.5);
      v6.y = (int)(TypedValue.applyDimension(1, (float)v7, DisplayMetrics) + 0.5);
      this.addView(v4, new android.widget.FrameLayout.LayoutParams(v6.x, v6.y, 17));
    
    }

    private android.graphics.Point a(int p0)
    {
      int v2;
      int v3;
      android.graphics.Point v4;
      android.util.DisplayMetrics DisplayMetrics;
      v2 = 24;
      v3 = 20;
      v4 = new android.graphics.Point();
      switch ( p0 )
      {
        case 0:
          v3 = 14;
          break;
        case 1:
          v2 = 32;
          break;
        case 2:
          v2 = 50;
          break;
        default:
          v2 = 38;
          v3 = 24;
          break;
      }
      DisplayMetrics = this.getResources().getDisplayMetrics();
      v4.x = (int)(TypedValue.applyDimension(1, (float)v2, DisplayMetrics) + 0.5);
      v4.y = (int)(TypedValue.applyDimension(1, (float)v3, DisplayMetrics) + 0.5);
      return v4;
    }

    private com.google.android.gms.plus.PlusOneDummyView$d a()
    {
      com.google.android.gms.plus.PlusOneDummyView$d v1;
      v1 = (com.google.android.gms.plus.PlusOneDummyView$d)new com.google.android.gms.plus.PlusOneDummyView$b(this.getContext(), 0);
      if ( !v1.a() )
        v1 = (com.google.android.gms.plus.PlusOneDummyView$d)new com.google.android.gms.plus.PlusOneDummyView$c(this.getContext(), 0);
      if ( !v1.a() )
        return (com.google.android.gms.plus.PlusOneDummyView$d)new com.google.android.gms.plus.PlusOneDummyView$a(this.getContext(), 0);
      return v1;
    }

}
