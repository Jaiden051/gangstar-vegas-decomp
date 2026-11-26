// Decompiled from classes.dex (SourceFile: ImageResponseCache$BufferedHttpInputStream.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class ImageResponseCache$BufferedHttpInputStream extends java.io.BufferedInputStream {
    // Fields
    java.net.HttpURLConnection connection;

    // Methods
    ImageResponseCache$BufferedHttpInputStream(java.io.InputStream p0, java.net.HttpURLConnection p1)
    {
      super(p0, 0x2000);
      this.connection = p1;
    }

    public void close()
 throws java.io.IOException {
      super.close();
      Utility.disconnectQuietly(this.connection);
    }

}
