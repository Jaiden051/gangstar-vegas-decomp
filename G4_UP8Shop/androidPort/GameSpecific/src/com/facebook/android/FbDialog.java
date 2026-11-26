// Decompiled from classes.dex (SourceFile: FbDialog.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.android;

public class FbDialog extends com.facebook.widget.WebDialog {
    // Fields
    private com.facebook.android.Facebook$DialogListener mListener;

    // Methods
    public FbDialog(
            android.content.Context p0,
            String p1,
            android.os.Bundle p2,
            com.facebook.android.Facebook$DialogListener p3)
    {
      super(p0, p1, p2, 16973840, null);
      this.setDialogListener(p3);
    }

    public FbDialog(
            android.content.Context p0,
            String p1,
            android.os.Bundle p2,
            com.facebook.android.Facebook$DialogListener p3,
            int p4)
    {
      super(p0, p1, p2, p4, null);
      this.setDialogListener(p3);
    }

    public FbDialog(android.content.Context p0, String p1, com.facebook.android.Facebook$DialogListener p2)
    {
      this(p0, p1, p2, 16973840);
    }

    public FbDialog(android.content.Context p0, String p1, com.facebook.android.Facebook$DialogListener p2, int p3)
    {
      super(p0, p1, p3);
      this.setDialogListener(p2);
    }

    /* synthetic */ static void access$000(
            com.facebook.android.FbDialog p0,
            android.os.Bundle p1,
            com.facebook.FacebookException p2)
    {
      p0.callDialogListener(p1, p2);
    }

    private void callDialogListener(android.os.Bundle p0, com.facebook.FacebookException p1)
    {
      com.facebook.FacebookDialogException v3;
      if ( this.mListener != null )
      {
        if ( p0 != null )
        {
          this.mListener.onComplete(p0);
        }
        else if ( p1 instanceof com.facebook.FacebookDialogException )
        {
          v3 = (com.facebook.FacebookDialogException)p1;
          this.mListener.onError(new com.facebook.android.DialogError(v3.getMessage(), v3.getErrorCode(), v3.getFailingUrl()));
        }
        else if ( p1 instanceof com.facebook.FacebookOperationCanceledException )
        {
          this.mListener.onCancel();
        }
        else
        {
          this.mListener.onFacebookError(new com.facebook.android.FacebookError(p1.getMessage()));
        }
      }
    }

    private void setDialogListener(com.facebook.android.Facebook$DialogListener p0)
    {
      this.mListener = p0;
      this.setOnCompleteListener((com.facebook.widget.WebDialog$OnCompleteListener)new com.facebook.android.FbDialog$1(this));
    }

}
