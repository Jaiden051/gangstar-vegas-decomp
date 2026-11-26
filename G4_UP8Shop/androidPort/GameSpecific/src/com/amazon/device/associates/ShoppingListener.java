// Decompiled from classes.dex (SourceFile: ShoppingListener.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public interface ShoppingListener {
    // Methods
    public abstract void onPurchaseResponse(com.amazon.device.associates.PurchaseResponse p0);

    public abstract void onReceiptsResponse(com.amazon.device.associates.ReceiptsResponse p0);

    public abstract void onSearchByIdResponse(com.amazon.device.associates.SearchByIdResponse p0);

    public abstract void onSearchResponse(com.amazon.device.associates.SearchResponse p0);

    public abstract void onServiceStatusResponse(com.amazon.device.associates.ServiceStatusResponse p0);

}
