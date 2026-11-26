// Decompiled from classes.dex (SourceFile: GraphObjectCursor.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

interface GraphObjectCursor<T> {
    // Methods
    public abstract boolean areMoreObjectsAvailable();

    public abstract void close();

    public abstract int getCount();

    public abstract com.facebook.model.GraphObject getGraphObject();

    public abstract int getPosition();

    public abstract boolean isAfterLast();

    public abstract boolean isBeforeFirst();

    public abstract boolean isClosed();

    public abstract boolean isFirst();

    public abstract boolean isFromCache();

    public abstract boolean isLast();

    public abstract boolean move(int p0);

    public abstract boolean moveToFirst();

    public abstract boolean moveToLast();

    public abstract boolean moveToNext();

    public abstract boolean moveToPosition(int p0);

    public abstract boolean moveToPrevious();

}
