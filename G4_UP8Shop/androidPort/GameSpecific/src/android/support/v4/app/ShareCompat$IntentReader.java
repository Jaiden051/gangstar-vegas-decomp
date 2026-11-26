// Decompiled from classes.dex (SourceFile: ShareCompat$IntentReader.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.text.Html;
import android.util.Log;
public class ShareCompat$IntentReader {
    // Fields
    private static java.lang.String a;
    private android.app.Activity b;
    private android.content.Intent c;
    private java.lang.String d;
    private android.content.ComponentName e;
    private java.util.ArrayList f;

    // Methods
    private ShareCompat$IntentReader(android.app.Activity p0)
    {
      super();
      this.b = p0;
      this.c = p0.getIntent();
      this.d = ShareCompat.getCallingPackage(p0);
      this.e = ShareCompat.getCallingActivity(p0);
    }

    private android.net.Uri a(int p0)
    {
      IndexOutOfBoundsException v4;
      StringBuilder v5;
      int v6;
      if ( this.f == null && this.c() )
        this.f = this.c.getParcelableArrayListExtra("android.intent.extra.STREAM");
      if ( this.f != null )
        return (android.net.Uri)this.f.get(p0);
      if ( p0 != 0 )
      {
        v4 = null;
        v5 = new StringBuilder("Stream items available: ");
        if ( this.f == null && this.c() )
          this.f = this.c.getParcelableArrayListExtra("android.intent.extra.STREAM");
        if ( this.f != null )
          v6 = this.f.size();
        else
          v6 = this.c.hasExtra("android.intent.extra.STREAM") ? 1 : 0;
        throw (v4 = new IndexOutOfBoundsException(v5.append(v6).append(" index requested: ").append(p0).toString()));
      }
      return (android.net.Uri)this.c.getParcelableExtra("android.intent.extra.STREAM");
    }

    private boolean a()
    {
      String Action;
      Action = this.c.getAction();
      return "android.intent.action.SEND".equals(Action) || "android.intent.action.SEND_MULTIPLE".equals(Action);
    }

    private boolean b()
    {
      return "android.intent.action.SEND".equals(this.c.getAction());
    }

    private boolean c()
    {
      return "android.intent.action.SEND_MULTIPLE".equals(this.c.getAction());
    }

    private String d()
    {
      return this.c.getType();
    }

    private CharSequence e()
    {
      return this.c.getCharSequenceExtra("android.intent.extra.TEXT");
    }

    private String f()
    {
      String StringExtra;
      CharSequence CharSequenceExtra; // RETVAL
    
      StringExtra = this.c.getStringExtra("android.intent.extra.HTML_TEXT");
      if ( StringExtra != null )
        return StringExtra;
      CharSequenceExtra = this.c.getCharSequenceExtra("android.intent.extra.TEXT");
      if ( !(CharSequenceExtra instanceof android.text.Spanned) )
      {
        if ( CharSequenceExtra != null )
          return ShareCompat.access$000().a(CharSequenceExtra);
        return StringExtra;
      }
      return Html.toHtml((android.text.Spanned)CharSequenceExtra);
    }

    public static android.support.v4.app.ShareCompat$IntentReader from(android.app.Activity p0)
    {
      return new android.support.v4.app.ShareCompat$IntentReader(p0);
    }

    private android.net.Uri g()
    {
      return (android.net.Uri)this.c.getParcelableExtra("android.intent.extra.STREAM");
    }

    private int h()
    {
      if ( this.f == null && this.c() )
        this.f = this.c.getParcelableArrayListExtra("android.intent.extra.STREAM");
      if ( this.f != null )
        return this.f.size();
      else
        return this.c.hasExtra("android.intent.extra.STREAM") ? 1 : 0;
    }

    private String[] i()
    {
      return this.c.getStringArrayExtra("android.intent.extra.EMAIL");
    }

    private String[] j()
    {
      return this.c.getStringArrayExtra("android.intent.extra.CC");
    }

    private String[] k()
    {
      return this.c.getStringArrayExtra("android.intent.extra.BCC");
    }

    private String l()
    {
      return this.c.getStringExtra("android.intent.extra.SUBJECT");
    }

    private String m()
    {
      return this.d;
    }

    private android.content.ComponentName n()
    {
      return this.e;
    }

    private android.graphics.drawable.Drawable o()
    {
      android.graphics.drawable.Drawable v1;
      android.content.pm.PackageManager PackageManager; // RETVAL
    
      v1 = null;
      if ( this.e != null )
      {
        PackageManager = this.b.getPackageManager();
        try
        {
          return PackageManager.getActivityIcon(this.e);
        }
        catch ( android.content.pm.PackageManager.NameNotFoundException v4 )
        {
          Log.e("IntentReader", "Could not retrieve icon for calling activity", v4);
        }
      }
      return v1;
    }

    private android.graphics.drawable.Drawable p()
    {
      android.graphics.drawable.Drawable v1;
      android.content.pm.PackageManager PackageManager; // RETVAL
    
      v1 = null;
      if ( this.d != null )
      {
        PackageManager = this.b.getPackageManager();
        try
        {
          return PackageManager.getApplicationIcon(this.d);
        }
        catch ( android.content.pm.PackageManager.NameNotFoundException v4 )
        {
          Log.e("IntentReader", "Could not retrieve icon for calling application", v4);
        }
      }
      return v1;
    }

    private CharSequence q()
    {
      CharSequence v1;
      android.content.pm.PackageManager PackageManager; // RETVAL
    
      v1 = null;
      if ( this.d != null )
      {
        PackageManager = this.b.getPackageManager();
        try
        {
          return PackageManager.getApplicationLabel(PackageManager.getApplicationInfo(this.d, 0));
        }
        catch ( android.content.pm.PackageManager.NameNotFoundException v4 )
        {
          Log.e("IntentReader", "Could not retrieve label for calling application", v4);
        }
      }
      return v1;
    }

}
