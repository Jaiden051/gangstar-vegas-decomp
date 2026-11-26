// Decompiled from classes.dex (SourceFile: PreviewActivity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

public class PreviewActivity extends android.app.Activity {
    // Methods
    public PreviewActivity()
    {
      super();
    }

    private void a(String p0, String p1, String p2)
    {
      android.app.AlertDialog v4; // RETVAL
    
      v4 = new android.app.AlertDialog.Builder(this).create();
      v4.setTitle(p0);
      v4.setMessage(p1);
      v4.setButton(-1, p2, (android.content.DialogInterface.OnClickListener)new com.google.android.gms.tagmanager.PreviewActivity$1(this));
      v4.show();
    }

    public void onCreate(android.os.Bundle p0)
    {
      android.net.Uri Data;
      String v3;
      android.app.AlertDialog v4; // RETVAL
      android.content.Intent LaunchIntentForPackage;
      try
      {
        super.onCreate(p0);
        bh.B("Preview activity");
        Data = this.getIntent().getData();
        if ( !TagManager.getInstance(this).a(Data) )
        {
          v3 = "Cannot preview the app with the uri: " + Data + ". Launching current version instead.";
          bh.D(v3);
          v4 = new android.app.AlertDialog.Builder(this).create();
          v4.setTitle("Preview failure");
          v4.setMessage(v3);
          v4.setButton(-1, "Continue", (android.content.DialogInterface.OnClickListener)new com.google.android.gms.tagmanager.PreviewActivity$1(this));
          v4.show();
        }
        LaunchIntentForPackage = this.getPackageManager().getLaunchIntentForPackage(this.getPackageName());
        if ( LaunchIntentForPackage != null )
        {
          bh.B("Invoke the launch activity for package name: " + this.getPackageName());
          this.startActivity(LaunchIntentForPackage);
        }
        else
        {
          bh.B("No launch activity found for package name: " + this.getPackageName());
        }
      }
      catch ( Exception v6 )
      {
        bh.A("Calling preview threw an exception: " + v6.getMessage());
      }
    }

}
