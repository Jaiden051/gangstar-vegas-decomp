// Decompiled from classes.dex (SourceFile: CursorFilter$CursorFilterClient.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

interface CursorFilter$CursorFilterClient {
    // Methods
    public abstract void changeCursor(android.database.Cursor p0);

    public abstract java.lang.CharSequence convertToString(android.database.Cursor p0);

    public abstract android.database.Cursor getCursor();

    public abstract android.database.Cursor runQueryOnBackgroundThread(java.lang.CharSequence p0);

}
