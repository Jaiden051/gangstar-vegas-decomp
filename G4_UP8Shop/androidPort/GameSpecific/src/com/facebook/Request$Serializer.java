// Decompiled from classes.dex (SourceFile: Request$Serializer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.graphics.Bitmap;
import java.net.URLEncoder;
import org.json.JSONObject;
class Request$Serializer implements com.facebook.Request$KeyValueSerializer {
    // Fields
    private boolean firstWrite;
    private final com.facebook.internal.Logger logger;
    private final java.io.OutputStream outputStream;
    private boolean useUrlEncode;

    // Methods
    public Request$Serializer(java.io.OutputStream p0, com.facebook.internal.Logger p1, boolean p2)
    {
      super();
      this.firstWrite = true;
      this.useUrlEncode = false;
      this.outputStream = p0;
      this.logger = p1;
      this.useUrlEncode = p2;
    }

    public void write(String p0, Object[] p1)
 throws java.io.IOException, java.io.UnsupportedEncodingException {
      if ( this.useUrlEncode )
      {
        this.outputStream.write(URLEncoder.encode(String.format(p0, p1), "UTF-8").getBytes());
      }
      else
      {
        if ( this.firstWrite )
        {
          this.outputStream.write("--".getBytes());
          this.outputStream.write("3i2ndDfv2rTHiSisAbouNdArYfORhtTPEefj3q2f".getBytes());
          this.outputStream.write("\r\n".getBytes());
          this.firstWrite = false;
        }
        this.outputStream.write(String.format(p0, p1).getBytes());
      }
    }

    public void writeBitmap(String p0, android.graphics.Bitmap p1)
 throws java.io.IOException {
      this.writeContentDisposition(p0, p0, "image/png");
      p1.compress(Bitmap.CompressFormat.PNG, 100, this.outputStream);
      this.writeLine("", new Object[0]);
      this.writeRecordBoundary();
      if ( this.logger != null )
        this.logger.appendKeyValue("    " + p0, "<Image>");
    }

    public void writeBytes(String p0, byte[] p1)
 throws java.io.IOException {
      String v3;
      Object[] v4;
      this.writeContentDisposition(p0, p0, "content/unknown");
      this.outputStream.write(p1);
      this.writeLine("", new Object[0]);
      this.writeRecordBoundary();
      if ( this.logger != null )
      {
        v3 = "    " + p0;
        v4 = new Object[1];
        v4[0] = Integer.valueOf(p1.length);
        this.logger.appendKeyValue(v3, String.format("<Data: %d>", v4));
      }
    }

    public void writeContentDisposition(String p0, String p1, String p2)
 throws java.io.IOException {
      Object[] v4;
      Object[] v5;
      Object[] v6;
      Object[] v7;
      if ( this.useUrlEncode )
      {
        v7 = new Object[1];
        v7[0] = p0;
        this.outputStream.write(String.format("%s=", v7).getBytes());
      }
      else
      {
        v4 = new Object[1];
        v4[0] = p0;
        this.write("Content-Disposition: form-data; name=\"%s\"", v4);
        if ( p1 != null )
        {
          v5 = new Object[1];
          v5[0] = p1;
          this.write("; filename=\"%s\"", v5);
        }
        this.writeLine("", new Object[0]);
        if ( p2 != null )
        {
          v6 = new Object[2];
          v6[0] = "Content-Type";
          v6[1] = p2;
          this.writeLine("%s: %s", v6);
        }
        this.writeLine("", new Object[0]);
      }
    }

    public void writeFile(String p0, android.os.ParcelFileDescriptor p1, String p2)
    {
      android.os.ParcelFileDescriptor.AutoCloseInputStream v4 = null;
      int i = 0;
      String v6 = null;
      Object[] v7 = null;
      android.os.ParcelFileDescriptor.AutoCloseInputStream v8 = null;
      java.io.BufferedInputStream v9 = null;
      byte[] v10 = null;
      int v11 = 0; // RETVAL
      java.io.BufferedInputStream v13 = null;
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
              v4 = null;
              if ( p2 == null )
              p2 = "content/unknown";
              this.writeContentDisposition(p0, p0, p2);
              if ( !(this.outputStream instanceof com.facebook.ProgressNoopOutputStream) ) { _pc = 2; continue _sm; }
              ((com.facebook.ProgressNoopOutputStream)this.outputStream).addProgress(p1.getStatSize());
              i = 0;
              _pc = 1;
              continue _sm;
            case 1:
              this.writeLine("", new Object[0]);
              this.writeRecordBoundary();
              if ( this.logger != null )
              {
              v6 = "    " + p0;
              v7 = new Object[1];
              v7[0] = Integer.valueOf(i);
              this.logger.appendKeyValue(v6, String.format("<Data: %d>", v7));
              }
              return;
            case 2:
              _ehCatchPc = 3;
              v8 = new android.os.ParcelFileDescriptor.AutoCloseInputStream(p1);
              _ehCatchPc = -1;
              _pc = 6;
              continue _sm;
            case 3:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 5; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v13 = null;
              _pc = 4;
              continue _sm;
            case 4:
              if ( v13 != null )
              v13.close();
              if ( v4 != null )
              v4.close();
              throw _cv_1;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              try
              {
              v9 = new java.io.BufferedInputStream(v8);
              }
              catch ( Throwable v12 )
              {
              v13 = null;
              v4 = v8;
              { _pc = 4; continue _sm; }
              }
              
              try
              {
              v10 = new byte[0x2000];
              for ( i = 0; ; i += v11 )
              {
              v11 = v9.read(v10);
              if ( v11 == -1 )
              break;
              this.outputStream.write(v10, 0, v11);
              }
              v9.close();
              v8.close();
              { _pc = 1; continue _sm; }
              }
              catch ( Throwable v12 )
              {
              v13 = v9;
              v4 = v8;
              { _pc = 4; continue _sm; }
              }
              

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

    public void writeFile(String p0, com.facebook.Request$ParcelFileDescriptorWithMimeType p1)
    {
      this.writeFile(p0, p1.getFileDescriptor(), p1.getMimeType());
    }

    public void writeLine(String p0, Object[] p1)
 throws java.io.IOException {
      this.write(p0, p1);
      if ( !this.useUrlEncode )
        this.write("\r\n", new Object[0]);
    }

    public void writeObject(String p0, Object p1, com.facebook.Request p2)
 throws java.io.IOException {
      if ( this.outputStream instanceof com.facebook.RequestOutputStream )
        ((com.facebook.RequestOutputStream)this.outputStream).setCurrentRequest(p2);
      if ( Request.access$100(p1) )
      {
        this.writeString(p0, Request.access$200(p1));
      }
      else if ( p1 instanceof android.graphics.Bitmap )
      {
        this.writeBitmap(p0, (android.graphics.Bitmap)p1);
      }
      else if ( p1 instanceof byte[] )
      {
        this.writeBytes(p0, (byte[])p1);
      }
      else if ( p1 instanceof android.os.ParcelFileDescriptor )
      {
        this.writeFile(p0, (android.os.ParcelFileDescriptor)p1, null);
      }
      else
      {
        if ( !(p1 instanceof com.facebook.Request$ParcelFileDescriptorWithMimeType) )
          throw new IllegalArgumentException("value is not a supported type: String, Bitmap, byte[]");
        this.writeFile(p0, (com.facebook.Request$ParcelFileDescriptorWithMimeType)p1);
      }
    }

    public void writeRecordBoundary()
 throws java.io.IOException {
      Object[] v1;
      if ( this.useUrlEncode )
      {
        this.outputStream.write("&".getBytes());
      }
      else
      {
        v1 = new Object[1];
        v1[0] = "3i2ndDfv2rTHiSisAbouNdArYfORhtTPEefj3q2f";
        this.writeLine("--%s", v1);
      }
    }

    public void writeRequestsAsJson(
            String p0,
            org.json.JSONArray p1,
            java.util.Collection<com.facebook.Request> p2)
 throws org.json.JSONException, java.io.IOException {
      com.facebook.RequestOutputStream v4;
      java.util.Iterator v5;
      int v6;
      com.facebook.Request v7;
      org.json.JSONObject JSONObject; // RETVAL
      Object[] v9;
      if ( this.outputStream instanceof com.facebook.RequestOutputStream )
      {
        v4 = (com.facebook.RequestOutputStream)this.outputStream;
        this.writeContentDisposition(p0, null, null);
        this.write("[", new Object[0]);
        v5 = p2.iterator();
        v6 = 0;
        while ( v5.hasNext() )
        {
          v7 = (com.facebook.Request)v5.next();
          JSONObject = p1.getJSONObject(v6);
          v4.setCurrentRequest(v7);
          v9 = new Object[1];
          v9[0] = JSONObject.toString();
          if ( v6 <= 0 )
            this.write("%s", v9);
          else
            this.write(",%s", v9);
          ++v6;
        }
        this.write("]", new Object[0]);
        if ( this.logger != null )
          this.logger.appendKeyValue("    " + p0, p1.toString());
      }
      else
      {
        this.writeString(p0, p1.toString());
      }
    }

    public void writeString(String p0, String p1)
 throws java.io.IOException {
      Object[] v3;
      this.writeContentDisposition(p0, null, null);
      v3 = new Object[1];
      v3[0] = p1;
      this.writeLine("%s", v3);
      this.writeRecordBoundary();
      if ( this.logger != null )
        this.logger.appendKeyValue("    " + p0, p1);
    }

}
