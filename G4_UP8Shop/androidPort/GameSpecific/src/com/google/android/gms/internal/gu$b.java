// Decompiled from classes.dex (SourceFile: gu$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class gu$b extends android.graphics.drawable.Drawable.ConstantState {
    // Fields
    int a;
    int b;

    // Methods
    gu$b(com.google.android.gms.internal.gu$b p0)
    {
      super();
      if ( p0 != null )
      {
        this.a = p0.a;
        this.b = p0.b;
      }
    }

    public final int getChangingConfigurations()
    {
      return this.a;
    }

    public final android.graphics.drawable.Drawable newDrawable()
    {
      return new com.google.android.gms.internal.gu(this);
    }

}
