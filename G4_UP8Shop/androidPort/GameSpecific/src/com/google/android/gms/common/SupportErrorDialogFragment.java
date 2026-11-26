// Decompiled from classes.dex (SourceFile: SupportErrorDialogFragment.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common;

import com.google.android.gms.internal.hn;
public class SupportErrorDialogFragment extends android.support.v4.app.l {
    // Fields
    private android.app.Dialog n;
    private android.content.DialogInterface.OnCancelListener o;

    // Methods
    public SupportErrorDialogFragment()
    {
      super();
      this.n = null;
      this.o = null;
    }

    public static com.google.android.gms.common.SupportErrorDialogFragment newInstance(
            android.app.Dialog p0)
    {
      return newInstance(p0, null);
    }

    public static com.google.android.gms.common.SupportErrorDialogFragment newInstance(
            android.app.Dialog p0,
            android.content.DialogInterface.OnCancelListener p1)
    {
      com.google.android.gms.common.SupportErrorDialogFragment v2;
      android.app.Dialog v3;
      v2 = new com.google.android.gms.common.SupportErrorDialogFragment();
      v3 = (android.app.Dialog)hn.b(p0, "Cannot display null dialog");
      v3.setOnCancelListener(null);
      v3.setOnDismissListener(null);
      v2.n = v3;
      if ( p1 != null )
        v2.o = p1;
      return v2;
    }

    public final android.app.Dialog a()
    {
      if ( this.n == null )
        this.a(false);
      return this.n;
    }

    public final void a(android.support.v4.app.FragmentManager p0, String p1)
    {
      super.a(p0, p1);
    }

    public void onCancel(android.content.DialogInterface p0)
    {
      if ( this.o != null )
        this.o.onCancel(p0);
    }

}
