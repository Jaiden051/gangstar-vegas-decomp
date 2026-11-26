// Decompiled from classes.dex (SourceFile: FileProvider.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

import android.os.Environment;
import android.os.ParcelFileDescriptor;
import android.webkit.MimeTypeMap;
public class FileProvider extends android.content.ContentProvider {
    // Fields
    private static java.lang.String ATTR_NAME;
    private static java.lang.String ATTR_PATH;
    private static final java.lang.String[] COLUMNS;
    private static final java.io.File DEVICE_ROOT;
    private static java.lang.String META_DATA_FILE_PROVIDER_PATHS;
    private static java.lang.String TAG_CACHE_PATH;
    private static java.lang.String TAG_EXTERNAL;
    private static java.lang.String TAG_FILES_PATH;
    private static java.lang.String TAG_ROOT_PATH;
    private static java.util.HashMap sCache;
    private android.support.v4.content.FileProvider$PathStrategy mStrategy;

    // Methods
    static
    {
      String[] v0;
      v0 = new String[2];
      v0[0] = "_display_name";
      v0[1] = "_size";
      COLUMNS = v0;
      DEVICE_ROOT = new java.io.File("/");
      sCache = new java.util.HashMap();
    }

    public FileProvider()
    {
      super();
    }

    private static java.io.File buildPath(java.io.File p0, String[] p1)
    {
      int v2;
      int i;
      String v5;
      java.io.File v6;
      v2 = p1.length;
      for ( i = 0; i < v2; ++i )
      {
        v5 = p1[i];
        if ( v5 != null )
          v6 = new java.io.File(p0, v5);
        else
          v6 = p0;
        p0 = v6;
      }
      return p0;
    }

    private static Object[] copyOf(Object[] p0, int p1)
    {
      Object[] v2;
      v2 = new Object[p1];
      System.arraycopy(p0, 0, v2, 0, p1);
      return v2;
    }

    private static String[] copyOf(String[] p0, int p1)
    {
      String[] v2;
      v2 = new String[p1];
      System.arraycopy(p0, 0, v2, 0, p1);
      return v2;
    }

    private static android.support.v4.content.FileProvider$PathStrategy getPathStrategy(
            android.content.Context p0,
            String p1)
    {
      java.util.HashMap v2;
      Object v3; // RETVAL
      android.support.v4.content.FileProvider$PathStrategy v4;
      android.support.v4.content.FileProvider$PathStrategy v5; // RETVAL
    
      v2 = sCache;
      synchronized ( v2 )
      {
        v3 = sCache.get(p1);
        v4 = (android.support.v4.content.FileProvider$PathStrategy)v3;
        if ( v4 != null )
          return v4;
        try
        {
          v5 = parsePathStrategy(p0, p1);
        }
        catch ( java.io.IOException v7 )
        {
          throw new IllegalArgumentException("Failed to parse android.support.FILE_PROVIDER_PATHS meta-data", v7);
        }
        catch ( org.xmlpull.v1.XmlPullParserException v9 )
        {
          throw new IllegalArgumentException("Failed to parse android.support.FILE_PROVIDER_PATHS meta-data", v9);
        }
        v4 = v5;
        sCache.put(p1, v5);
        return v4;
      }
    }

    public static android.net.Uri getUriForFile(android.content.Context p0, String p1, java.io.File p2)
    {
      return getPathStrategy(p0, p1).getUriForFile(p2);
    }

    private static int modeToMode(String p0)
    {
      if ( "r".equals(p0) )
        return 0x10000000;
      if ( "w".equals(p0) || "wt".equals(p0) )
        return 738197504;
      if ( "wa".equals(p0) )
        return 704643072;
      if ( "rw".equals(p0) )
        return 939524096;
      if ( !"rwt".equals(p0) )
        throw new IllegalArgumentException("Invalid mode: " + p0);
      return 1006632960;
    }

    private static android.support.v4.content.FileProvider$PathStrategy parsePathStrategy(
            android.content.Context p0,
            String p1) throws java.io.IOException, org.xmlpull.v1.XmlPullParserException
    {
      android.support.v4.content.FileProvider$SimplePathStrategy v2;
      android.content.res.XmlResourceParser XmlMetaData;
      int v4; // RETVAL
      String Name;
      String AttributeValue;
      String v7;
      String[] v8;
      java.io.File v9;
      String[] v10;
      String[] v11;
      String[] v12;
      v2 = new android.support.v4.content.FileProvider$SimplePathStrategy(p1);
      XmlMetaData = p0.getPackageManager().resolveContentProvider(p1, 128).loadXmlMetaData(p0.getPackageManager(), "android.support.FILE_PROVIDER_PATHS");
      if ( XmlMetaData == null )
        throw new IllegalArgumentException("Missing android.support.FILE_PROVIDER_PATHS meta-data");
      while ( true )
      {
        v4 = XmlMetaData.next();
        if ( v4 == 1 )
          break;
        if ( v4 == 2 )
        {
          Name = XmlMetaData.getName();
          AttributeValue = XmlMetaData.getAttributeValue(null, "name");
          v7 = XmlMetaData.getAttributeValue(null, "path");
          if ( "root-path".equals(Name) )
          {
            v8 = new String[1];
            v8[0] = v7;
            v9 = buildPath(DEVICE_ROOT, v8);
          }
          else if ( "files-path".equals(Name) )
          {
            v10 = new String[1];
            v10[0] = v7;
            v9 = buildPath(p0.getFilesDir(), v10);
          }
          else if ( "cache-path".equals(Name) )
          {
            v11 = new String[1];
            v11[0] = v7;
            v9 = buildPath(p0.getCacheDir(), v11);
          }
          else if ( "external-path".equals(Name) )
          {
            v12 = new String[1];
            v12[0] = v7;
            v9 = buildPath(Environment.getExternalStorageDirectory(), v12);
          }
          else
          {
            v9 = null;
          }
          if ( v9 != null )
            v2.addRoot(AttributeValue, v9);
        }
      }
      return (android.support.v4.content.FileProvider$PathStrategy)v2;
    }

    public void attachInfo(android.content.Context p0, android.content.pm.ProviderInfo p1)
    {
      super.attachInfo(p0, p1);
      if ( p1.exported )
        throw new SecurityException("Provider must not be exported");
      if ( !p1.grantUriPermissions )
        throw new SecurityException("Provider must grant uri permissions");
      this.mStrategy = getPathStrategy(p0, p1.authority);
    }

    public int delete(android.net.Uri p0, String p1, String[] p2)
    {
      return this.mStrategy.getFileForUri(p0).delete() ? 1 : 0;
    }

    public String getType(android.net.Uri p0)
    {
      java.io.File FileForUri;
      int IndexOf;
      String MimeTypeFromExtension;
      FileForUri = this.mStrategy.getFileForUri(p0);
      IndexOf = FileForUri.getName().lastIndexOf(46);
      if ( IndexOf < 0 )
        return "application/octet-stream";
      MimeTypeFromExtension = MimeTypeMap.getSingleton().getMimeTypeFromExtension(FileForUri.getName().substring(IndexOf + 1));
      if ( MimeTypeFromExtension == null )
        return "application/octet-stream";
      return MimeTypeFromExtension;
    }

    public android.net.Uri insert(android.net.Uri p0, android.content.ContentValues p1)
    {
      throw new UnsupportedOperationException("No external inserts");
    }

    public boolean onCreate()
    {
      return true;
    }

    public android.os.ParcelFileDescriptor openFile(android.net.Uri p0, String p1) throws java.io.FileNotFoundException
    {
      return ParcelFileDescriptor.open(this.mStrategy.getFileForUri(p0), modeToMode(p1));
    }

    public android.database.Cursor query(android.net.Uri p0, String[] p1, String p2, String[] p3, String p4)
    {
      java.io.File FileForUri;
      String[] v7;
      Object[] v8;
      int v9;
      int v10;
      int v11;
      Object v12;
      int v13;
      android.database.MatrixCursor v14;
      FileForUri = this.mStrategy.getFileForUri(p0);
      if ( p1 == null )
        p1 = COLUMNS;
      v7 = new String[p1.length];
      v8 = new Object[p1.length];
      v9 = p1.length;
      v10 = 0;
      v11 = 0;
      while ( v10 < v9 )
      {
        v12 = p1[v10];
        if ( "_display_name".equals(v12) )
        {
          v7[v11] = "_display_name";
          v13 = v11 + 1;
          v8[v11] = FileForUri.getName();
        }
        else if ( "_size".equals(v12) )
        {
          v7[v11] = "_size";
          v13 = v11 + 1;
          v8[v11] = Long.valueOf(FileForUri.length());
        }
        else
        {
          v13 = v11;
        }
        ++v10;
        v11 = v13;
      }
      v14 = new android.database.MatrixCursor(copyOf(v7, v11), 1);
      v14.addRow(copyOf(v8, v11));
      return v14;
    }

    public int update(android.net.Uri p0, android.content.ContentValues p1, String p2, String[] p3)
    {
      throw new UnsupportedOperationException("No external updates");
    }

}
