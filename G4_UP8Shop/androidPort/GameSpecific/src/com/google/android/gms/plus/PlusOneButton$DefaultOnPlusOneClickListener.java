// Decompiled from classes.dex (SourceFile: PlusOneButton$DefaultOnPlusOneClickListener.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus;

public class PlusOneButton$DefaultOnPlusOneClickListener implements android.view.View.OnClickListener, com.google.android.gms.plus.PlusOneButton$OnPlusOneClickListener {
    // Fields
    final com.google.android.gms.plus.PlusOneButton a;
    private final com.google.android.gms.plus.PlusOneButton$OnPlusOneClickListener b;

    // Methods
    public PlusOneButton$DefaultOnPlusOneClickListener(
            com.google.android.gms.plus.PlusOneButton p0,
            com.google.android.gms.plus.PlusOneButton$OnPlusOneClickListener p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void a(android.content.Intent p0)
    {
      android.content.Context Context; // RETVAL
    
      Context = this.a.getContext();
      if ( Context instanceof android.app.Activity && p0 != null )
        ((android.app.Activity)Context).startActivityForResult(p0, PlusOneButton.b(this.a));
    }

    public void onClick(android.view.View p0)
    {
      android.content.Intent v2;
      v2 = (android.content.Intent)PlusOneButton.a(this.a).getTag();
      if ( this.b != null )
        this.b.a(v2);
      else
        this.a(v2);
    }

}
