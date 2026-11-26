// Decompiled from classes.dex (SourceFile: cl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class cl extends android.widget.FrameLayout implements android.view.View.OnClickListener {
    // Fields
    private final android.app.Activity a;
    private final android.widget.ImageButton b;

    // Methods
    public cl(android.app.Activity p0, int p1)
    {
      super(p0);
      int v3; // RETVAL
      this.a = p0;
      this.setOnClickListener(this);
      this.b = new android.widget.ImageButton(p0);
      this.b.setImageResource(17301527);
      this.b.setBackgroundColor(0);
      this.b.setOnClickListener(this);
      this.b.setPadding(0, 0, 0, 0);
      v3 = eu.a(p0, p1);
      this.addView(this.b, new android.widget.FrameLayout.LayoutParams(v3, v3, 17));
    
    }

    public final void a(boolean p0)
    {
      android.widget.ImageButton b;
      int v3;
      b = this.b;
      if ( p0 )
        v3 = 4;
      else
        v3 = 0;
      b.setVisibility(v3);
    }

    public final void onClick(android.view.View p0)
    {
      this.a.finish();
    }

}
