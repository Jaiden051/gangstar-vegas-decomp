// Decompiled from classes.dex (SourceFile: AsyncFacebookRunner.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.android;

public class AsyncFacebookRunner {
    // Fields
    com.facebook.android.Facebook fb;

    // Methods
    public AsyncFacebookRunner(com.facebook.android.Facebook p0)
    {
      super();
      this.fb = p0;
    }

    public void logout(
            android.content.Context p0,
            com.facebook.android.AsyncFacebookRunner$RequestListener p1)
    {
      this.logout(p0, p1, null);
    }

    public void logout(
            android.content.Context p0,
            com.facebook.android.AsyncFacebookRunner$RequestListener p1,
            Object p2)
    {
      new com.facebook.android.AsyncFacebookRunner$1(this, p0, p1, p2).start();
    }

    public void request(
            android.os.Bundle p0,
            com.facebook.android.AsyncFacebookRunner$RequestListener p1)
    {
      this.request(null, p0, "GET", p1, null);
    }

    public void request(
            android.os.Bundle p0,
            com.facebook.android.AsyncFacebookRunner$RequestListener p1,
            Object p2)
    {
      this.request(null, p0, "GET", p1, p2);
    }

    public void request(
            String p0,
            android.os.Bundle p1,
            com.facebook.android.AsyncFacebookRunner$RequestListener p2)
    {
      this.request(p0, p1, "GET", p2, null);
    }

    public void request(
            String p0,
            android.os.Bundle p1,
            com.facebook.android.AsyncFacebookRunner$RequestListener p2,
            Object p3)
    {
      this.request(p0, p1, "GET", p2, p3);
    }

    public void request(
            String p0,
            android.os.Bundle p1,
            String p2,
            com.facebook.android.AsyncFacebookRunner$RequestListener p3,
            Object p4)
    {
      new com.facebook.android.AsyncFacebookRunner$2(this, p0, p1, p2, p3, p4).start();
    }

    public void request(String p0, com.facebook.android.AsyncFacebookRunner$RequestListener p1)
    {
      this.request(p0, new android.os.Bundle(), "GET", p1, null);
    }

    public void request(
            String p0,
            com.facebook.android.AsyncFacebookRunner$RequestListener p1,
            Object p2)
    {
      this.request(p0, new android.os.Bundle(), "GET", p1, p2);
    }

}
