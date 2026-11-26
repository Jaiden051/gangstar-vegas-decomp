// Decompiled from classes.dex (SourceFile: ErrorDialogFragment.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common;

import com.google.android.gms.internal.hn;
public class ErrorDialogFragment extends android.app.DialogFragment {
    // Fields
    private android.app.Dialog a;
    private android.content.DialogInterface.OnCancelListener b;

    // Methods
    public ErrorDialogFragment()
    {
      super();
      this.a = null;
      this.b = null;
    }

    public static com.google.android.gms.common.ErrorDialogFragment newInstance(android.app.Dialog p0)
    {
      return newInstance(p0, null);
    }

    public static com.google.android.gms.common.ErrorDialogFragment newInstance(
            android.app.Dialog p0,
            android.content.DialogInterface.OnCancelListener p1)
    {
      com.google.android.gms.common.ErrorDialogFragment v2;
      android.app.Dialog v3;
      v2 = new com.google.android.gms.common.ErrorDialogFragment();
      v3 = (android.app.Dialog)hn.b(p0, "Cannot display null dialog");
      v3.setOnCancelListener(null);
      v3.setOnDismissListener(null);
      v2.a = v3;
      if ( p1 != null )
        v2.b = p1;
      return v2;
    }

    public void onCancel(android.content.DialogInterface p0)
    {
      if ( this.b != null )
        this.b.onCancel(p0);
    }

    public android.app.Dialog onCreateDialog(android.os.Bundle p0)
    {
      if ( this.a == null )
        this.setShowsDialog(false);
      return this.a;
    }

    public void show(android.app.FragmentManager p0, String p1)
    {
      super.show(p0, p1);
    }

}
