// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.loopj.android.http;

public final class g implements java.io.Serializable {
    // Fields
    private static long a;
    private final transient org.apache.http.cookie.Cookie b;
    private transient org.apache.http.impl.cookie.BasicClientCookie c;

    // Methods
    public g(org.apache.http.cookie.Cookie p0)
    {
      super();
      this.b = p0;
    }

    private void a(java.io.ObjectInputStream p0)
 throws java.io.IOException, ClassNotFoundException {
      this.c = new org.apache.http.impl.cookie.BasicClientCookie((String)p0.readObject(), (String)p0.readObject());
      this.c.setComment((String)p0.readObject());
      this.c.setDomain((String)p0.readObject());
      this.c.setExpiryDate((java.util.Date)p0.readObject());
      this.c.setPath((String)p0.readObject());
      this.c.setVersion(p0.readInt());
      this.c.setSecure(p0.readBoolean());
    }

    private void a(java.io.ObjectOutputStream p0)
 throws java.io.IOException {
      p0.writeObject(this.b.getName());
      p0.writeObject(this.b.getValue());
      p0.writeObject(this.b.getComment());
      p0.writeObject(this.b.getDomain());
      p0.writeObject(this.b.getExpiryDate());
      p0.writeObject(this.b.getPath());
      p0.writeInt(this.b.getVersion());
      p0.writeBoolean(this.b.isSecure());
    }

    public final org.apache.http.cookie.Cookie a()
    {
      org.apache.http.cookie.Cookie b;
      b = this.b;
      if ( this.c != null )
        return this.c;
      return b;
    }

}
