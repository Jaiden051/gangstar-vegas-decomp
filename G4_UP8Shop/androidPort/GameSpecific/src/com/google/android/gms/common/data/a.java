// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.data;

import android.graphics.Bitmap;
import android.os.ParcelFileDescriptor;
import android.util.Log;
import java.io.File;
import java.nio.ByteBuffer;
public class a implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    android.os.ParcelFileDescriptor b;
    final int c;
    private android.graphics.Bitmap d;
    private boolean e;
    private java.io.File f;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.common.data.b();
    }

    a(int p0, android.os.ParcelFileDescriptor p1, int p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = null;
      this.e = false;
    }

    public a(android.graphics.Bitmap p0)
    {
      super();
      this.a = 1;
      this.b = null;
      this.c = 0;
      this.d = p0;
      this.e = true;
    }

    private static void a(java.io.Closeable p0)
    {
      try
      {
        p0.close();
      }
      catch ( java.io.IOException v1 )
      {
        Log.w("BitmapTeleporter", "Could not close stream", v1);
      }
    }

    private java.io.FileOutputStream b()
    {
      String v1;
      java.io.File TempFile; // RETVAL
      java.io.File v3;
      java.io.FileOutputStream v4;
      if ( this.f == null )
        throw new IllegalStateException("setTempDir() must be called before writing this object to a parcel");
      try
      {
        v1 = ".tmp";
        TempFile = File.createTempFile("teleporter", ".tmp", this.f);
      }
      catch ( java.io.IOException v6 )
      {
        throw new IllegalStateException("Could not create temporary file", v6);
      }
      v3 = TempFile;
      try
      {
        v4 = new java.io.FileOutputStream(TempFile);
        this.b = ParcelFileDescriptor.open(TempFile, 0x10000000);
      }
      catch ( java.io.FileNotFoundException e )
      {
        throw new IllegalStateException("Temporary file is somehow already deleted");
      }
      v3.delete();
      return v4;
    }

    public final android.graphics.Bitmap a()
    {
      android.os.ParcelFileDescriptor b;
      android.os.ParcelFileDescriptor.AutoCloseInputStream v2;
      java.io.DataInputStream v3;
      byte[] v4;
      int Int;
      int v6;
      android.graphics.Bitmap.Config v7;
      java.nio.Buffer v8;
      android.graphics.Bitmap Bitmap = null; // RETVAL
    
      if ( this.e )
        return this.d;
      b = this.b;
      v2 = new android.os.ParcelFileDescriptor.AutoCloseInputStream(b);
      v3 = new java.io.DataInputStream(v2);
      try
      {
        try
        {
          v4 = new byte[v3.readInt()];
          Int = v3.readInt();
          v6 = v3.readInt();
          v7 = android.graphics.Bitmap.Config.valueOf(v3.readUTF());
          v3.read(v4);
        }
        catch ( java.io.IOException v11 )
        {
          throw new IllegalStateException("Could not read from parcel file descriptor", v11);
        }
        a(v3);
        v8 = ByteBuffer.wrap(v4);
        Bitmap = Bitmap.createBitmap(Int, v6, v7);
        Bitmap.copyPixelsFromBuffer(v8);
        this.d = Bitmap;
        this.e = true;
        return this.d;
      }
      catch ( Throwable v12 )
      {
        a(v3);
        throw v12;
      }
    }

    public final void a(java.io.File p0)
    {
      if ( p0 == null )
        throw new NullPointerException("Cannot set null temp directory");
      this.f = p0;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      android.graphics.Bitmap d = null;
      java.nio.ByteBuffer v4 = null; // RETVAL
      byte[] v5 = null;
      java.io.DataOutputStream v6 = null;
      Throwable _cv_1 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              if ( this.b != null )
              { _pc = 1; continue _sm; }
              d = this.d;
              v4 = ByteBuffer.allocate(d.getRowBytes() * d.getHeight());
              d.copyPixelsToBuffer(v4);
              v5 = v4.array();
              v6 = new java.io.DataOutputStream(this.b());
              _ehCatchPc = 2;
              try
              {
              v6.writeInt(v5.length);
              v6.writeInt(d.getWidth());
              v6.writeInt(d.getHeight());
              v6.writeUTF(d.getConfig().toString());
              v6.write(v5);
              }
              catch ( java.io.IOException v7 )
              {
              throw new IllegalStateException("Could not write into unlinked file", v7);
              }
              
              a(v6);
              _pc = 1;
              continue _sm;
            case 1:
              com.google.android.gms.common.data.b.a(this, p0, p1);
              return;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 3; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              a(v6);
              throw _cv_1;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

}
