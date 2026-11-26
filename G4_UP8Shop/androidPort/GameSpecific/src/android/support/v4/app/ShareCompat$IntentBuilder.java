// Decompiled from classes.dex (SourceFile: ShareCompat$IntentBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.content.Intent;
import android.text.Html;
public class ShareCompat$IntentBuilder {
    // Fields
    private android.app.Activity a;
    private android.content.Intent b;
    private java.lang.CharSequence c;
    private java.util.ArrayList d;
    private java.util.ArrayList e;
    private java.util.ArrayList f;
    private java.util.ArrayList g;

    // Methods
    private ShareCompat$IntentBuilder(android.app.Activity p0)
    {
      super();
      this.a = p0;
      this.b = new android.content.Intent().setAction("android.intent.action.SEND");
      this.b.putExtra("android.support.v4.app.EXTRA_CALLING_PACKAGE", p0.getPackageName());
      this.b.putExtra("android.support.v4.app.EXTRA_CALLING_ACTIVITY", p0.getComponentName());
      this.b.addFlags(0x80000);
    }

    private android.support.v4.app.ShareCompat$IntentBuilder a(int p0)
    {
      this.c = this.a.getText(p0);
      return this;
    }

    private android.support.v4.app.ShareCompat$IntentBuilder a(android.net.Uri p0)
    {
      if ( !this.b.getAction().equals("android.intent.action.SEND") )
        this.b.setAction("android.intent.action.SEND");
      this.g = null;
      this.b.putExtra("android.intent.extra.STREAM", p0);
      return this;
    }

    private android.support.v4.app.ShareCompat$IntentBuilder a(CharSequence p0)
    {
      this.c = p0;
      return this;
    }

    private android.support.v4.app.ShareCompat$IntentBuilder a(String p0)
    {
      this.b.setType(p0);
      return this;
    }

    private android.support.v4.app.ShareCompat$IntentBuilder a(String[] p0)
    {
      if ( this.d != null )
        this.d = null;
      this.b.putExtra("android.intent.extra.EMAIL", p0);
      return this;
    }

    private void a(String p0, java.util.ArrayList<String> p1)
    {
      String[] StringArrayExtra; // RETVAL
      Object v4;
      int v5;
      String[] v6;
      StringArrayExtra = this.b.getStringArrayExtra(p0);
      v4 = StringArrayExtra;
      if ( StringArrayExtra != null )
        v5 = StringArrayExtra.length;
      else
        v5 = 0;
      v6 = new String[(p1.size() + v5)];
      p1.toArray(v6);
      if ( v4 != null )
        System.arraycopy(v4, 0, v6, p1.size(), v5);
      this.b.putExtra(p0, v6);
    }

    private void a(String p0, String[] p1)
    {
      android.content.Intent v3;
      String[] StringArrayExtra; // RETVAL
      int v5;
      String[] v6;
      v3 = this.a();
      StringArrayExtra = v3.getStringArrayExtra(p0);
      if ( StringArrayExtra != null )
        v5 = StringArrayExtra.length;
      else
        v5 = 0;
      v6 = new String[(p1.length + v5)];
      if ( StringArrayExtra != null )
        System.arraycopy(StringArrayExtra, 0, v6, 0, v5);
      System.arraycopy(p1, 0, v6, v5, p1.length);
      v3.putExtra(p0, v6);
    }

    private android.support.v4.app.ShareCompat$IntentBuilder b(android.net.Uri p0)
    {
      android.net.Uri v2;
      v2 = (android.net.Uri)this.b.getParcelableExtra("android.intent.extra.STREAM");
      if ( v2 != null )
      {
        if ( this.g == null )
          this.g = new java.util.ArrayList();
        this.b.removeExtra("android.intent.extra.STREAM");
        this.g.add(v2);
        this.g.add(p0);
      }
      else
      {
        if ( !this.b.getAction().equals("android.intent.action.SEND") )
          this.b.setAction("android.intent.action.SEND");
        this.g = null;
        this.b.putExtra("android.intent.extra.STREAM", p0);
      }
      return this;
    }

    private android.support.v4.app.ShareCompat$IntentBuilder b(CharSequence p0)
    {
      this.b.putExtra("android.intent.extra.TEXT", p0);
      return this;
    }

    private android.support.v4.app.ShareCompat$IntentBuilder b(String p0)
    {
      this.b.putExtra("android.intent.extra.HTML_TEXT", p0);
      if ( !this.b.hasExtra("android.intent.extra.TEXT") )
        this.b.putExtra("android.intent.extra.TEXT", Html.fromHtml(p0));
      return this;
    }

    private android.support.v4.app.ShareCompat$IntentBuilder b(String[] p0)
    {
      this.a("android.intent.extra.EMAIL", p0);
      return this;
    }

    private android.support.v4.app.ShareCompat$IntentBuilder c(String p0)
    {
      if ( this.d == null )
        this.d = new java.util.ArrayList();
      this.d.add(p0);
      return this;
    }

    private android.support.v4.app.ShareCompat$IntentBuilder c(String[] p0)
    {
      this.b.putExtra("android.intent.extra.CC", p0);
      return this;
    }

    private android.support.v4.app.ShareCompat$IntentBuilder d(String p0)
    {
      if ( this.e == null )
        this.e = new java.util.ArrayList();
      this.e.add(p0);
      return this;
    }

    private android.support.v4.app.ShareCompat$IntentBuilder d(String[] p0)
    {
      this.a("android.intent.extra.CC", p0);
      return this;
    }

    private void d()
    {
      this.a.startActivity(this.c());
    }

    private android.support.v4.app.ShareCompat$IntentBuilder e(String p0)
    {
      if ( this.f == null )
        this.f = new java.util.ArrayList();
      this.f.add(p0);
      return this;
    }

    private android.support.v4.app.ShareCompat$IntentBuilder e(String[] p0)
    {
      this.b.putExtra("android.intent.extra.BCC", p0);
      return this;
    }

    private android.support.v4.app.ShareCompat$IntentBuilder f(String p0)
    {
      this.b.putExtra("android.intent.extra.SUBJECT", p0);
      return this;
    }

    private android.support.v4.app.ShareCompat$IntentBuilder f(String[] p0)
    {
      this.a("android.intent.extra.BCC", p0);
      return this;
    }

    public static android.support.v4.app.ShareCompat$IntentBuilder from(android.app.Activity p0)
    {
      return new android.support.v4.app.ShareCompat$IntentBuilder(p0);
    }

    public final android.content.Intent a()
    {
      boolean v1;
      boolean v2; // RETVAL
      boolean v3;
      if ( this.d != null )
      {
        this.a("android.intent.extra.EMAIL", this.d);
        this.d = null;
      }
      if ( this.e != null )
      {
        this.a("android.intent.extra.CC", this.e);
        this.e = null;
      }
      if ( this.f != null )
      {
        this.a("android.intent.extra.BCC", this.f);
        this.f = null;
      }
      v1 = this.g != null && this.g.size() > 1;
      v2 = this.b.getAction().equals("android.intent.action.SEND_MULTIPLE");
      v3 = v2;
      if ( !v1 && v2 )
      {
        this.b.setAction("android.intent.action.SEND");
        if ( this.g == null || this.g.isEmpty() )
          this.b.removeExtra("android.intent.extra.STREAM");
        else
          this.b.putExtra("android.intent.extra.STREAM", (android.os.Parcelable)this.g.get(0));
        this.g = null;
      }
      if ( v1 && !v3 )
      {
        this.b.setAction("android.intent.action.SEND_MULTIPLE");
        if ( this.g == null || this.g.isEmpty() )
          this.b.removeExtra("android.intent.extra.STREAM");
        else
          this.b.putParcelableArrayListExtra("android.intent.extra.STREAM", this.g);
      }
      return this.b;
    }

    final android.app.Activity b()
    {
      return this.a;
    }

    public final android.content.Intent c()
    {
      return Intent.createChooser(this.a(), this.c);
    }

}
