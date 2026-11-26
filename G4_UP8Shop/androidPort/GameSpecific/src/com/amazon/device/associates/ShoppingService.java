// Decompiled from classes.dex (SourceFile: ShoppingService.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public interface ShoppingService {
    // Methods
    public abstract com.amazon.device.associates.RequestId getReceipts(com.amazon.device.associates.ReceiptsRequest p0) throws com.amazon.device.associates.NoListenerException;

    public abstract com.amazon.device.associates.RequestId getServiceStatus() throws com.amazon.device.associates.NoListenerException;

    public abstract com.amazon.device.associates.RequestId purchase(com.amazon.device.associates.PurchaseRequest p0) throws com.amazon.device.associates.NoListenerException;

    public abstract com.amazon.device.associates.RequestId search(com.amazon.device.associates.SearchRequest p0) throws com.amazon.device.associates.NoListenerException;

    public abstract com.amazon.device.associates.RequestId searchById(com.amazon.device.associates.SearchByIdRequest p0) throws com.amazon.device.associates.NoListenerException;

    public abstract void setListener(com.amazon.device.associates.ShoppingListener p0);

}
