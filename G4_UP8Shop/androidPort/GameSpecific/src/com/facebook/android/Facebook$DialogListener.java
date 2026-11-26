// Decompiled from classes.dex (SourceFile: Facebook$DialogListener.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.android;

public interface Facebook$DialogListener {
    // Methods
    public abstract void onCancel();

    public abstract void onComplete(android.os.Bundle p0);

    public abstract void onError(com.facebook.android.DialogError p0);

    public abstract void onFacebookError(com.facebook.android.FacebookError p0);

}
