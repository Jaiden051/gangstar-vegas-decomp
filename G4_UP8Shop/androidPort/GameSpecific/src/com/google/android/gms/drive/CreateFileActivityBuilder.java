// Decompiled from classes.dex (SourceFile: CreateFileActivityBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive;

import com.google.android.gms.internal.hn;
public class CreateFileActivityBuilder {
    // Fields
    public static java.lang.String a;
    private final com.google.android.gms.drive.internal.h b;
    private com.google.android.gms.drive.Contents c;

    // Methods
    public CreateFileActivityBuilder()
    {
      super();
      this.b = new com.google.android.gms.drive.internal.h(0);
    }

    private android.content.IntentSender a(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      hn.b(this.c, "Must provide initial contents to CreateFileActivityBuilder.");
      try
      {
        this.c.a().close();
      }
      catch ( java.io.IOException e )
      {
      }
      this.c.c();
      return this.b.a(p0);
    }

    private com.google.android.gms.drive.CreateFileActivityBuilder a(
            com.google.android.gms.drive.Contents p0)
    {
      this.c = (com.google.android.gms.drive.Contents)hn.f(p0);
      this.b.a(this.c.b());
      return this;
    }

    private com.google.android.gms.drive.CreateFileActivityBuilder a(
            com.google.android.gms.drive.DriveId p0)
    {
      this.b.a(p0);
      return this;
    }

    private com.google.android.gms.drive.CreateFileActivityBuilder a(
            com.google.android.gms.drive.MetadataChangeSet p0)
    {
      this.b.a(p0);
      return this;
    }

    private com.google.android.gms.drive.CreateFileActivityBuilder a(String p0)
    {
      this.b.a(p0);
      return this;
    }

}
