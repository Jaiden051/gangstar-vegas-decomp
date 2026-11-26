// Decompiled from classes.dex (SourceFile: FileLruCache$CopyingInputStream.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

final class FileLruCache$CopyingInputStream extends java.io.InputStream {
    // Fields
    final java.io.InputStream input;
    final java.io.OutputStream output;

    // Methods
    FileLruCache$CopyingInputStream(java.io.InputStream p0, java.io.OutputStream p1)
    {
      super();
      this.input = p0;
      this.output = p1;
    }

    public final int available()
 throws java.io.IOException {
      return this.input.available();
    }

    public final void close()
 throws java.io.IOException {
      try
      {
        this.input.close();
      }
      finally
      {
        this.output.close();
      }
    }

    public final void mark(int p0)
    {
      throw new UnsupportedOperationException();
    }

    public final boolean markSupported()
    {
      return false;
    }

    public final int read()
 throws java.io.IOException {
      int result; // RETVAL
    
      result = this.input.read();
      if ( result >= 0 )
        this.output.write(result);
      return result;
    }

    public final int read(byte[] p0)
 throws java.io.IOException {
      int result; // RETVAL
    
      result = this.input.read(p0);
      if ( result > 0 )
        this.output.write(p0, 0, result);
      return result;
    }

    public final int read(byte[] p0, int p1, int p2)
 throws java.io.IOException {
      int result; // RETVAL
    
      result = this.input.read(p0, p1, p2);
      if ( result > 0 )
        this.output.write(p0, p1, result);
      return result;
    }

    public final synchronized void reset()
    {
      throw new UnsupportedOperationException();
    }

    public final long skip(long p0)
 throws java.io.IOException {
      byte[] v2;
      long i;
      long v4; // RETVAL
      int v5; // RETVAL
    
      v2 = new byte[1024];
      for ( i = 0; i < p0; i += v5 )
      {
        v4 = Math.min(p0 - i, v2.length);
        v5 = this.read(v2, 0, (int)v4);
        if ( v5 < 0 )
          break;
      }
      return i;
    }

}
