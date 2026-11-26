// Decompiled from classes.dex (SourceFile: PurchasingListener.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap;

public interface PurchasingListener {
    // Methods
    public abstract void onProductDataResponse(com.amazon.device.iap.model.ProductDataResponse p0);

    public abstract void onPurchaseResponse(com.amazon.device.iap.model.PurchaseResponse p0);

    public abstract void onPurchaseUpdatesResponse(com.amazon.device.iap.model.PurchaseUpdatesResponse p0);

    public abstract void onUserDataResponse(com.amazon.device.iap.model.UserDataResponse p0);

}
