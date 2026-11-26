// Decompiled from classes.dex (SourceFile: af.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

public interface af<D> {
    // Methods
    public abstract android.support.v4.content.Loader onCreateLoader(int p0, android.os.Bundle p1);

    public abstract void onLoadFinished(android.support.v4.content.Loader<D> p0, D p1);

    public abstract void onLoaderReset(android.support.v4.content.Loader<D> p0);

}
