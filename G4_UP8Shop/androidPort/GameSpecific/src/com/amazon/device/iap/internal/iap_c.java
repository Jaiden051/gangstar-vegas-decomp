// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal;

public interface iap_c {
    // Methods
    public abstract void a(android.content.Context p0, android.content.Intent p1) ;

    public abstract void a(com.amazon.device.iap.model.RequestId p0) throws java.text.ParseException, org.json.JSONException;

    public abstract void a(com.amazon.device.iap.model.RequestId p0, java.lang.String p1) ;

    public abstract void a(com.amazon.device.iap.model.RequestId p0, java.lang.String p1, com.amazon.device.iap.model.FulfillmentResult p2) ;

    public abstract void a(com.amazon.device.iap.model.RequestId p0, java.util.Set<String> p1) ;

    public abstract void a(com.amazon.device.iap.model.RequestId p0, boolean p1) ;

}
