// Decompiled from classes.dex (SourceFile: Contents.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive;

public class Contents implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final android.os.ParcelFileDescriptor b;
    final int c;
    final int d;
    final com.google.android.gms.drive.DriveId e;
    java.lang.String f;
    boolean g;
    private boolean h;
    private boolean i;
    private boolean j;
    private boolean k;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.a();
    }

    Contents(
            int p0,
            android.os.ParcelFileDescriptor p1,
            int p2,
            int p3,
            com.google.android.gms.drive.DriveId p4,
            String p5,
            boolean p6)
    {
      super();
      this.h = false;
      this.i = false;
      this.j = false;
      this.k = false;
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
      this.g = p6;
    }

    private com.google.android.gms.drive.DriveId d()
    {
      return this.e;
    }

    private java.io.InputStream e()
    {
      if ( this.h )
        throw new IllegalStateException("Contents have been closed, cannot access the input stream.");
      if ( this.d != 0x10000000 )
        throw new IllegalStateException("getInputStream() can only be used with contents opened with MODE_READ_ONLY.");
      if ( this.i )
        throw new IllegalStateException("getInputStream() can only be called once per Contents instance.");
      this.i = true;
      return new java.io.FileInputStream(this.b.getFileDescriptor());
    }

    private java.io.OutputStream f()
    {
      if ( this.h )
        throw new IllegalStateException("Contents have been closed, cannot access the output stream.");
      if ( this.d != 0x20000000 )
        throw new IllegalStateException("getOutputStream() can only be used with contents opened with MODE_WRITE_ONLY.");
      if ( this.j )
        throw new IllegalStateException("getOutputStream() can only be called once per Contents instance.");
      this.j = true;
      return new java.io.FileOutputStream(this.b.getFileDescriptor());
    }

    private int g()
    {
      return this.d;
    }

    public final android.os.ParcelFileDescriptor a()
    {
      if ( this.h )
        throw new IllegalStateException("Contents have been closed, cannot access the output stream.");
      return this.b;
    }

    public final int b()
    {
      return this.c;
    }

    public final void c()
    {
      this.h = true;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.a.a(this, p0, p1);
    }

}
