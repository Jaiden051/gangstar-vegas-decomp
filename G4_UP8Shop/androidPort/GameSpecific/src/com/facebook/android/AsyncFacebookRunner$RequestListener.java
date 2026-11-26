// Decompiled from classes.dex (SourceFile: AsyncFacebookRunner$RequestListener.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.android;

public interface AsyncFacebookRunner$RequestListener {
    // Methods
    public abstract void onComplete(java.lang.String p0, java.lang.Object p1);

    public abstract void onFacebookError(com.facebook.android.FacebookError p0, java.lang.Object p1);

    public abstract void onFileNotFoundException(java.io.FileNotFoundException p0, java.lang.Object p1);

    public abstract void onIOException(java.io.IOException p0, java.lang.Object p1);

    public abstract void onMalformedURLException(java.net.MalformedURLException p0, java.lang.Object p1);

}
