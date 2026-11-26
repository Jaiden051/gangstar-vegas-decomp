// Decompiled from classes.dex (SourceFile: SearchAdView.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.ads.search;

import android.view.View;
public final class SearchAdView extends android.view.ViewGroup {
    // Fields
    private final com.google.android.gms.internal.av a;

    // Methods
    private SearchAdView(android.content.Context p0)
    {
      super(p0);
      this.a = new com.google.android.gms.internal.av(this);
    }

    public SearchAdView(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1);
      this.a = new com.google.android.gms.internal.av(this, p1, false);
    }

    public SearchAdView(android.content.Context p0, android.util.AttributeSet p1, int p2)
    {
      super(p0, p1, p2);
      this.a = new com.google.android.gms.internal.av(this, p1, false);
    }

    private void a()
    {
      this.a.a();
    }

    private void a(com.google.android.gms.ads.AdListener p0)
    {
      this.a.a(p0);
    }

    private void a(com.google.android.gms.ads.AdSize p0)
    {
      com.google.android.gms.ads.AdSize[] v2;
      v2 = new com.google.android.gms.ads.AdSize[1];
      v2[0] = p0;
      this.a.a(v2);
    }

    private void a(com.google.android.gms.ads.search.SearchAdRequest p0)
    {
      this.a.a(p0.o());
    }

    private void a(String p0)
    {
      this.a.a(p0);
    }

    private com.google.android.gms.ads.AdListener b()
    {
      return this.a.b();
    }

    private com.google.android.gms.ads.AdSize c()
    {
      return this.a.c();
    }

    private String d()
    {
      return this.a.e();
    }

    private void e()
    {
      this.a.h();
    }

    private void f()
    {
      this.a.j();
    }

    protected final void onLayout(boolean p0, int p1, int p2, int p3, int p4)
    {
      android.view.View ChildAt; // RETVAL
      android.view.View v7;
      int MeasuredWidth;
      int MeasuredHeight; // RETVAL
    
      ChildAt = this.getChildAt(0);
      v7 = ChildAt;
      if ( ChildAt != null && ChildAt.getVisibility() != 8 )
      {
        MeasuredWidth = v7.getMeasuredWidth();
        MeasuredHeight = v7.getMeasuredHeight();
        v7.layout((p3 - p1 - MeasuredWidth) / 2, (p4 - p2 - MeasuredHeight) / 2, MeasuredWidth
                                                                               + (p3 - p1 - MeasuredWidth) / 2, MeasuredHeight + (p4 - p2 - MeasuredHeight) / 2);
      }
    }

    protected final void onMeasure(int p0, int p1)
    {
      int MeasuredHeight;
      android.view.View ChildAt;
      com.google.android.gms.ads.AdSize v5;
      int MeasuredWidth;
      android.content.Context Context;
      MeasuredHeight = 0;
      ChildAt = this.getChildAt(0);
      v5 = this.a.c();
      if ( ChildAt == null || ChildAt.getVisibility() == 8 )
      {
        if ( v5 != null )
        {
          Context = this.getContext();
          MeasuredWidth = v5.b(Context);
          MeasuredHeight = v5.a(Context);
        }
        else
        {
          MeasuredWidth = 0;
        }
      }
      else
      {
        this.measureChild(ChildAt, p0, p1);
        MeasuredWidth = ChildAt.getMeasuredWidth();
        MeasuredHeight = ChildAt.getMeasuredHeight();
      }
      this.setMeasuredDimension(View.resolveSize(Math.max(MeasuredWidth, this.getSuggestedMinimumWidth()), p0), View.resolveSize(Math.max(MeasuredHeight, this.getSuggestedMinimumHeight()), p1));
    }

}
