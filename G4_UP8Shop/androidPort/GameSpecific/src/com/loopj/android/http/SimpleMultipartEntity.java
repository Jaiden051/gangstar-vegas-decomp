// Decompiled from classes.dex (SourceFile: SimpleMultipartEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.loopj.android.http;

class SimpleMultipartEntity implements org.apache.http.HttpEntity {
    // Fields
    private static final char[] d;
    java.io.ByteArrayOutputStream a;
    boolean b;
    boolean c;
    private java.lang.String e;

    // Methods
    static
    {
      d = "-_1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ".toCharArray();
    }

    public SimpleMultipartEntity()
    {
      super();
      int v1;
      StringBuffer v2;
      java.util.Random v3;
      v1 = 0;
      this.e = null;
      this.a = new java.io.ByteArrayOutputStream();
      this.b = false;
      this.c = false;
      v2 = new StringBuffer();
      v3 = new java.util.Random();
      while ( v1 < 30 )
      {
        v2.append(d[v3.nextInt(d.length)]);
        ++v1;
      }
      this.e = v2.toString();
    
    }

    private void a()
    {
      if ( !this.c )
      {
        try
        {
          this.a.write(("--" + this.e + "\r\n").getBytes());
        }
        catch ( java.io.IOException v1 )
        {
          v1.printStackTrace();
        }
      }
      this.c = true;
    }

    private void a(String p0, java.io.File p1, boolean p2)
    {
      try
      {
        this.a(p0, p1.getName(), new java.io.FileInputStream(p1), p2);
      }
      catch ( java.io.FileNotFoundException v4 )
      {
        v4.printStackTrace();
      }
    }

    private void b()
    {
      if ( !this.b )
      {
        try
        {
          this.a.write(("\r\n--" + this.e + "--\r\n").getBytes());
        }
        catch ( java.io.IOException v1 )
        {
          v1.printStackTrace();
        }
        this.b = true;
      }
    }

    public final void a(String p0, String p1)
    {
      this.a();
      try
      {
        this.a.write(("Content-Disposition: form-data; name=\"" + p0 + "\"\r\n\r\n").getBytes());
        this.a.write(p1.getBytes());
        this.a.write(("\r\n--" + this.e + "\r\n").getBytes());
      }
      catch ( java.io.IOException v3 )
      {
        v3.printStackTrace();
      }
    }

    public final void a(String p0, String p1, java.io.InputStream p2, String p3, boolean p4)
    {
      String v6;
      byte[] i;
      int v8; // RETVAL
    
      this.a();
      try
      {
        try
        {
          v6 = "Content-Type: " + p3 + "\r\n";
          this.a.write(("Content-Disposition: form-data; name=\"" + p0 + "\"; filename=\"" + p1 + "\"\r\n").getBytes());
          this.a.write(v6.getBytes());
          this.a.write("Content-Transfer-Encoding: binary\r\n\r\n".getBytes());
          for ( i = new byte[4096]; ; this.a.write(i, 0, v8) )
          {
            v8 = p2.read(i);
            if ( v8 == -1 )
              break;
          }
          if ( !p4 )
            this.a.write(("\r\n--" + this.e + "\r\n").getBytes());
          this.a.flush();
          try
          {
            p2.close();
          }
          catch ( java.io.IOException v10 )
          {
            v10.printStackTrace();
          }
          return;
        }
        catch ( java.io.IOException v9 )
        {
          v9.printStackTrace();
        }
      }
      catch ( Throwable v12 )
      {
        try
        {
          p2.close();
        }
        catch ( java.io.IOException v13 )
        {
          v13.printStackTrace();
        }
        throw v12;
      }
      try
      {
        p2.close();
        return;
      }
      catch ( java.io.IOException v11 )
      {
        v11.printStackTrace();
      }
      return;
    }

    public final void a(String p0, String p1, java.io.InputStream p2, boolean p3)
    {
      this.a(p0, p1, p2, "application/octet-stream", p3);
    }

    public void consumeContent()
    {
      if ( this.isStreaming() )
        throw new UnsupportedOperationException("Streaming entity does not implement #consumeContent()");
    }

    public java.io.InputStream getContent()
    {
      return new java.io.ByteArrayInputStream(this.a.toByteArray());
    }

    public org.apache.http.Header getContentEncoding()
    {
      return null;
    }

    public long getContentLength()
    {
      if ( !this.b )
      {
        try
        {
          this.a.write(("\r\n--" + this.e + "--\r\n").getBytes());
        }
        catch ( java.io.IOException v2 )
        {
          v2.printStackTrace();
        }
        this.b = true;
      }
      return this.a.toByteArray().length;
    }

    public org.apache.http.Header getContentType()
    {
      return new org.apache.http.message.BasicHeader("Content-Type", "multipart/form-data; boundary=" + this.e);
    }

    public boolean isChunked()
    {
      return false;
    }

    public boolean isRepeatable()
    {
      return false;
    }

    public boolean isStreaming()
    {
      return false;
    }

    public void writeTo(java.io.OutputStream p0)
 throws java.io.IOException {
      p0.write(this.a.toByteArray());
    }

}
