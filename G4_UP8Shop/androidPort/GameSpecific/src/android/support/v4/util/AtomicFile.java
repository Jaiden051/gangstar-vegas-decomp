// Decompiled from classes.dex (SourceFile: AtomicFile.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.util;

import android.util.Log;
public class AtomicFile {
    // Fields
    private final java.io.File a;
    private final java.io.File b;

    // Methods
    private AtomicFile(java.io.File p0)
    {
      super();
      this.a = p0;
      this.b = new java.io.File(p0.getPath() + ".bak");
    }

    private java.io.File a()
    {
      return this.a;
    }

    private void a(java.io.FileOutputStream p0)
    {
      if ( p0 != null )
      {
        sync(p0);
        try
        {
          p0.close();
          this.b.delete();
        }
        catch ( java.io.IOException v2 )
        {
          Log.w("AtomicFile", "finishWrite: Got exception:", v2);
        }
      }
    }

    private void b()
    {
      this.a.delete();
      this.b.delete();
    }

    private void b(java.io.FileOutputStream p0)
    {
      if ( p0 != null )
      {
        sync(p0);
        try
        {
          p0.close();
          this.a.delete();
          this.b.renameTo(this.a);
        }
        catch ( java.io.IOException v2 )
        {
          Log.w("AtomicFile", "failWrite: Got exception:", v2);
        }
      }
    }

    private java.io.FileOutputStream c() throws java.io.IOException
    {
      String v3;
      java.io.FileOutputStream v4;
      java.io.File a;
      if ( this.a.exists() )
      {
        if ( this.b.exists() )
        {
          a = this.a;
          a.delete();
        }
        else if ( !this.a.renameTo(this.b) )
        {
          v3 = "AtomicFile";
          Log.w("AtomicFile", "Couldn't rename file " + this.a + " to backup file " + this.b);
        }
      }
      try
      {
        return new java.io.FileOutputStream(this.a);
      }
      catch ( java.io.FileNotFoundException e )
      {
        if ( !this.a.getParentFile().mkdir() )
          throw new java.io.IOException("Couldn't create directory " + this.a);
        try
        {
          v4 = new java.io.FileOutputStream(this.a);
        }
        catch ( java.io.FileNotFoundException e2 )
        {
          throw new java.io.IOException("Couldn't create " + this.a);
        }
      }
      return v4;
    }

    private java.io.FileInputStream d() throws java.io.FileNotFoundException
    {
      if ( this.b.exists() )
      {
        this.a.delete();
        this.b.renameTo(this.a);
      }
      return new java.io.FileInputStream(this.a);
    }

    private byte[] e() throws java.io.IOException
    {
      int v1;
      boolean v3; // RETVAL
      java.io.FileInputStream v4;
      byte[] v5;
      int v6; // RETVAL
      int v8;
      int v9; // RETVAL
      byte[] v10;
      v1 = 0;
      if ( this.b.exists() )
      {
        this.a.delete();
        v3 = this.b.renameTo(this.a);
      }
      v4 = new java.io.FileInputStream(this.a);
      try
      {
        v5 = new byte[v4.available()];
        while ( true )
        {
          v6 = v4.read(v5, v1, v5.length - v1);
          if ( v6 <= 0 )
            break;
          v8 = v6 + v1;
          v9 = v4.available();
          if ( v9 <= v5.length - v8 )
          {
            v10 = v5;
          }
          else
          {
            v10 = new byte[(v9 + v8)];
            System.arraycopy(v5, 0, v10, 0, v8);
          }
          v5 = v10;
          v1 = v8;
        }
        return (byte[])v5;
      }
      finally
      {
        v4.close();
      }
    }

    static boolean sync(java.io.FileOutputStream p0)
    {
      if ( p0 == null )
        return true;
      try
      {
        p0.getFD().sync();
        return true;
      }
      catch ( java.io.IOException e )
      {
        return false;
      }
    }

}
