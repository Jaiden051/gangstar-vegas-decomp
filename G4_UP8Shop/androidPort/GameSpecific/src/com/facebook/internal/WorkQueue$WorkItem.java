// Decompiled from classes.dex (SourceFile: WorkQueue$WorkItem.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

interface WorkQueue$WorkItem {
    // Methods
    public abstract boolean cancel();

    public abstract boolean isRunning();

    public abstract void moveToFront();

}
