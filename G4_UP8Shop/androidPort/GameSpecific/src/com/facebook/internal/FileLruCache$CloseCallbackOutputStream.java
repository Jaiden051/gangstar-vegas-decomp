// Decompiled from classes.dex (SourceFile: FileLruCache$CloseCallbackOutputStream.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class FileLruCache$CloseCallbackOutputStream extends java.io.OutputStream {
    // Fields
    final com.facebook.internal.FileLruCache$StreamCloseCallback callback;
    final java.io.OutputStream innerStream;

    // Methods
    FileLruCache$CloseCallbackOutputStream(java.io.OutputStream p0, com.facebook.internal.FileLruCache$StreamCloseCallback p1)
    {
      super();
      this.innerStream = p0;
      this.callback = p1;
    }

    public void close()
 throws java.io.IOException {
      try
      {
        this.innerStream.close();
      }
      finally
      {
        this.callback.onClose();
      }
    }

    public void flush()
 throws java.io.IOException {
      this.innerStream.flush();
    }

    public void write(int p0)
 throws java.io.IOException {
      this.innerStream.write(p0);
    }

    public void write(byte[] p0)
 throws java.io.IOException {
      this.innerStream.write(p0);
    }

    public void write(byte[] p0, int p1, int p2)
 throws java.io.IOException {
      this.innerStream.write(p0, p1, p2);
    }

}
