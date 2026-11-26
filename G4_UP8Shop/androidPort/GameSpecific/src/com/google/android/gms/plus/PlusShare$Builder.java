// Decompiled from classes.dex (SourceFile: PlusShare$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus;

import android.text.TextUtils;
import com.google.android.gms.internal.hn;
public class PlusShare$Builder {
    // Fields
    private final android.content.Context a;
    private final android.content.Intent b;
    private boolean c;
    private java.util.ArrayList d;

    // Methods
    private PlusShare$Builder(android.app.Activity p0)
    {
      super();
      this.a = p0;
      this.b = new android.content.Intent().setAction("android.intent.action.SEND");
      this.b.addFlags(0x80000);
      if ( p0 != null && p0.getComponentName() != null )
        this.c = true;
    }

    private PlusShare$Builder(android.app.Activity p0, com.google.android.gms.plus.PlusClient p1)
    {
      this(p0);
      com.google.android.gms.plus.model.people.Person v3; // RETVAL
      String v4;
      hn.a(p1 != null, "PlusClient must not be null.");
      hn.a(p1.c(), "PlusClient must be connected to create an interactive post.");
      hn.a(
        p1.f().b("https://www.googleapis.com/auth/plus.login"),
        "Must request PLUS_LOGIN scope in PlusClient to create an interactive post.");
      v3 = p1.e();
      if ( v3 != null )
        v4 = v3.B();
      else
        v4 = "0";
      this.b.putExtra("com.google.android.apps.plus.SENDER_ID", v4);
    
    }

    private PlusShare$Builder(android.content.Context p0)
    {
      super();
      this.a = p0;
      this.b = new android.content.Intent().setAction("android.intent.action.SEND");
    }

    private android.content.Intent a()
    {
      boolean v1;
      boolean v2;
      boolean v3;
      boolean BooleanExtra; // RETVAL
      boolean v5;
      boolean v6;
      boolean v7;
      v1 = true;
      v2 = this.d != null && this.d.size() > 1;
      v3 = "android.intent.action.SEND_MULTIPLE".equals(this.b.getAction());
      BooleanExtra = this.b.getBooleanExtra("com.google.android.apps.plus.GOOGLE_INTERACTIVE_POST", false);
      v5 = BooleanExtra;
      v6 = !v2 || !BooleanExtra;
      hn.a(v6, "Call-to-action buttons are only available for URLs.");
      v7 = !BooleanExtra || this.b.hasExtra("com.google.android.apps.plus.CONTENT_URL");
      hn.a(v7, "The content URL is required for interactive posts.");
      if ( v5
        && !this.b.hasExtra("com.google.android.apps.plus.CONTENT_URL")
        && !this.b.hasExtra("com.google.android.apps.plus.CONTENT_DEEP_LINK_ID") )
      {
        v1 = false;
      }
      hn.a(v1, "Must set content URL or content deep-link ID to use a call-to-action button.");
      if ( this.b.hasExtra("com.google.android.apps.plus.CONTENT_DEEP_LINK_ID") )
        hn.a(
          PlusShare.bv(this.b.getStringExtra("com.google.android.apps.plus.CONTENT_DEEP_LINK_ID")),
          "The specified deep-link ID was malformed.");
      if ( !v2 && v3 )
      {
        this.b.setAction("android.intent.action.SEND");
        if ( this.d == null || this.d.isEmpty() )
          this.b.removeExtra("android.intent.extra.STREAM");
        else
          this.b.putExtra("android.intent.extra.STREAM", (android.os.Parcelable)this.d.get(0));
        this.d = null;
      }
      if ( v2 && !v3 )
      {
        this.b.setAction("android.intent.action.SEND_MULTIPLE");
        if ( this.d == null || this.d.isEmpty() )
          this.b.removeExtra("android.intent.extra.STREAM");
        else
          this.b.putParcelableArrayListExtra("android.intent.extra.STREAM", this.d);
      }
      if ( "com.google.android.gms.plus.action.SHARE_INTERNAL_GOOGLE".equals(this.b.getAction()) )
      {
        this.b.setPackage("com.google.android.gms");
        return this.b;
      }
      else
      {
        if ( this.b.hasExtra("android.intent.extra.STREAM") )
        {
          this.b.setPackage("com.google.android.apps.plus");
        }
        else
        {
          this.b.setAction("com.google.android.gms.plus.action.SHARE_GOOGLE");
          this.b.setPackage("com.google.android.gms");
        }
        return this.b;
      }
    }

    private com.google.android.gms.plus.PlusShare$Builder a(android.net.Uri p0)
    {
      this.d = null;
      this.b.putExtra("android.intent.extra.STREAM", p0);
      return this;
    }

    private com.google.android.gms.plus.PlusShare$Builder a(
            com.google.android.gms.plus.model.people.Person p0,
            java.util.List<com.google.android.gms.plus.model.people.Person> p1)
    {
      android.content.Intent b;
      String v4;
      int v5;
      java.util.ArrayList v7;
      java.util.ArrayList v8;
      java.util.Iterator v9;
      com.google.android.gms.plus.model.people.Person v10;
      b = this.b;
      if ( p0 != null )
        v4 = p0.B();
      else
        v4 = "0";
      b.putExtra("com.google.android.apps.plus.SENDER_ID", v4);
      if ( p1 != null )
        v5 = p1.size();
      else
        v5 = 0;
      if ( v5 != 0 )
      {
        v7 = new java.util.ArrayList(v5);
        v8 = new java.util.ArrayList(v5);
        v9 = p1.iterator();
        while ( v9.hasNext() )
        {
          v10 = (com.google.android.gms.plus.model.people.Person)v9.next();
          v7.add(v10.B());
          v8.add(v10.x());
        }
        this.b.putStringArrayListExtra("com.google.android.apps.plus.RECIPIENT_IDS", v7);
        this.b.putStringArrayListExtra("com.google.android.apps.plus.RECIPIENT_DISPLAY_NAMES", v8);
      }
      else
      {
        this.b.removeExtra("com.google.android.apps.plus.RECIPIENT_IDS");
        this.b.removeExtra("com.google.android.apps.plus.RECIPIENT_DISPLAY_NAMES");
      }
      return this;
    }

    private com.google.android.gms.plus.PlusShare$Builder a(CharSequence p0)
    {
      this.b.putExtra("android.intent.extra.TEXT", p0);
      return this;
    }

    private com.google.android.gms.plus.PlusShare$Builder a(String p0)
    {
      this.b.setType(p0);
      return this;
    }

    private com.google.android.gms.plus.PlusShare$Builder a(String p0, android.net.Uri p1, String p2)
    {
      boolean v4;
      android.os.Bundle v5;
      hn.a(this.c, "Must include the launching activity with PlusShare$Builder constructor before setting call-to-action");
      v4 = p1 != null && !TextUtils.isEmpty(p1.toString());
      hn.b(v4, "Must provide a call to action URL");
      v5 = new android.os.Bundle();
      if ( !TextUtils.isEmpty(p0) )
        v5.putString("label", p0);
      v5.putString("url", p1.toString());
      if ( !TextUtils.isEmpty(p2) )
      {
        hn.a(PlusShare.bv(p2), "The specified deep-link ID was malformed.");
        v5.putString("deepLinkId", p2);
      }
      this.b.putExtra("com.google.android.apps.plus.CALL_TO_ACTION", v5);
      this.b.putExtra("com.google.android.apps.plus.GOOGLE_INTERACTIVE_POST", true);
      this.b.setType("text/plain");
      return this;
    }

    private com.google.android.gms.plus.PlusShare$Builder a(
            String p0,
            String p1,
            String p2,
            android.net.Uri p3)
    {
      android.os.Bundle v5;
      hn.b(this.c, "Must include the launching activity with PlusShare$Builder constructor before setting deep links");
      hn.b(!TextUtils.isEmpty(p0), "The deepLinkId parameter is required.");
      v5 = PlusShare.a(null, null, null);
      this.b.putExtra("com.google.android.apps.plus.CONTENT_DEEP_LINK_ID", p0);
      this.b.putExtra("com.google.android.apps.plus.CONTENT_DEEP_LINK_METADATA", v5);
      this.b.setType("text/plain");
      return this;
    }

    private com.google.android.gms.plus.PlusShare$Builder a(
            java.util.List<com.google.android.gms.plus.model.people.Person> p0)
    {
      int v2;
      java.util.ArrayList v4;
      java.util.ArrayList v5;
      java.util.Iterator v6;
      com.google.android.gms.plus.model.people.Person v7;
      if ( p0 != null )
        v2 = p0.size();
      else
        v2 = 0;
      if ( v2 != 0 )
      {
        v4 = new java.util.ArrayList(v2);
        v5 = new java.util.ArrayList(v2);
        v6 = p0.iterator();
        while ( v6.hasNext() )
        {
          v7 = (com.google.android.gms.plus.model.people.Person)v6.next();
          v4.add(v7.B());
          v5.add(v7.x());
        }
        this.b.putStringArrayListExtra("com.google.android.apps.plus.RECIPIENT_IDS", v4);
        this.b.putStringArrayListExtra("com.google.android.apps.plus.RECIPIENT_DISPLAY_NAMES", v5);
      }
      else
      {
        this.b.removeExtra("com.google.android.apps.plus.RECIPIENT_IDS");
        this.b.removeExtra("com.google.android.apps.plus.RECIPIENT_DISPLAY_NAMES");
      }
      return this;
    }

    private com.google.android.gms.plus.PlusShare$Builder b(android.net.Uri p0)
    {
      android.net.Uri v2;
      v2 = (android.net.Uri)this.b.getParcelableExtra("android.intent.extra.STREAM");
      if ( v2 != null )
      {
        if ( this.d == null )
          this.d = new java.util.ArrayList();
        this.d.add(v2);
        this.d.add(p0);
      }
      else
      {
        this.d = null;
        this.b.putExtra("android.intent.extra.STREAM", p0);
      }
      return this;
    }

    private com.google.android.gms.plus.PlusShare$Builder b(String p0)
    {
      android.os.Bundle v2;
      hn.b(this.c, "Must include the launching activity with PlusShare$Builder constructor before setting deep links");
      hn.b(!TextUtils.isEmpty(p0), "The deepLinkId parameter is required.");
      v2 = PlusShare.a(null, null, null);
      this.b.putExtra("com.google.android.apps.plus.CONTENT_DEEP_LINK_ID", p0);
      this.b.putExtra("com.google.android.apps.plus.CONTENT_DEEP_LINK_METADATA", v2);
      this.b.setType("text/plain");
      return this;
    }

    private com.google.android.gms.plus.PlusShare$Builder c(android.net.Uri p0)
    {
      String v2;
      v2 = null;
      if ( p0 != null )
        v2 = p0.toString();
      if ( TextUtils.isEmpty(v2) )
        this.b.removeExtra("com.google.android.apps.plus.CONTENT_URL");
      else
        this.b.putExtra("com.google.android.apps.plus.CONTENT_URL", v2);
      return this;
    }

}
