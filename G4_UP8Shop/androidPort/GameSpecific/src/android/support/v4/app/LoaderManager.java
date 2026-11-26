// Decompiled from classes.dex (SourceFile: LoaderManager.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

public abstract class LoaderManager {
    // Methods
    public LoaderManager()
    {
      super();
    }

    public static void enableDebugLogging(boolean p0)
    {
      LoaderManagerImpl.b = p0;
    }

    public abstract <D> android.support.v4.content.Loader<D> a(int p0, android.os.Bundle p1, android.support.v4.app.af<D> p2);

    public abstract void a(int p0);

    public abstract void a(java.lang.String p0, java.io.FileDescriptor p1, java.io.PrintWriter p2, java.lang.String[] p3);

    public boolean a()
    {
      return false;
    }

    public abstract <D> android.support.v4.content.Loader<D> b(int p0);

    public abstract <D> android.support.v4.content.Loader<D> b(int p0, android.os.Bundle p1, android.support.v4.app.af<D> p2);

}
