// Decompiled from classes.dex (SourceFile: XmlTools.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.util;

import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.transform.TransformerFactory;
public class XmlTools {
    // Fields
    private static java.lang.String TAG;

    // Methods
    static
    {
      TAG = "XmlTools";
    }

    public XmlTools()
    {
      super();
    }

    public static String getElementValue(org.w3c.dom.Node p0)
    {
      org.w3c.dom.NodeList ChildNodes;
      String v2;
      int i;
      String v4;
      ChildNodes = p0.getChildNodes();
      v2 = null;
      for ( i = 0; i < ChildNodes.getLength(); ++i )
      {
        v4 = ((org.w3c.dom.CharacterData)ChildNodes.item(i)).getData().trim();
        if ( v4.length() != 0 )
        {
          VASTLog.v(TAG, "getElementValue: " + v4);
          return v4;
        }
        v2 = v4;
      }
      return v2;
    }

    public static void logXmlDocument(org.w3c.dom.Document p0)
    {
      javax.xml.transform.Transformer v1; // RETVAL
      java.io.StringWriter v2;
      VASTLog.d(TAG, "logXmlDocument");
      try
      {
        v1 = TransformerFactory.newInstance().newTransformer();
        v1.setOutputProperty("omit-xml-declaration", "no");
        v1.setOutputProperty("method", "xml");
        v1.setOutputProperty("indent", "yes");
        v1.setOutputProperty("encoding", "UTF-8");
        v1.setOutputProperty("{http://xml.apache.org/xslt}indent-amount", "4");
        v2 = new java.io.StringWriter();
        v1.transform(new javax.xml.transform.dom.DOMSource(p0), new javax.xml.transform.stream.StreamResult(v2));
        VASTLog.d(TAG, v2.toString());
      }
      catch ( Exception v3 )
      {
        VASTLog.e(TAG, v3.getMessage(), v3);
      }
    }

    public static String stringFromStream(java.io.InputStream p0)
 throws java.io.IOException, java.io.UnsupportedEncodingException {
      java.io.ByteArrayOutputStream v1;
      byte[] i;
      int v3; // RETVAL
    
      VASTLog.d(TAG, "stringFromStream");
      v1 = new java.io.ByteArrayOutputStream();
      for ( i = new byte[1024]; ; v1.write(i, 0, v3) )
      {
        v3 = p0.read(i);
        if ( v3 == -1 )
          break;
      }
      return new String(v1.toByteArray(), "UTF-8");
    }

    public static org.w3c.dom.Document stringToDocument(String p0)
    {
      org.w3c.dom.Document v1;
      javax.xml.parsers.DocumentBuilder v2; // RETVAL
      org.xml.sax.InputSource v3;
      VASTLog.d(TAG, "stringToDocument");
      v1 = null;
      try
      {
        v2 = DocumentBuilderFactory.newInstance().newDocumentBuilder();
        v3 = new org.xml.sax.InputSource();
        v3.setCharacterStream(new java.io.StringReader(p0));
        return v2.parse(v3);
      }
      catch ( Exception v5 )
      {
        VASTLog.e(TAG, v5.getMessage(), v5);
      }
      return v1;
    }

    public static String xmlDocumentToString(org.w3c.dom.Document p0)
    {
      String v1;
      javax.xml.transform.Transformer v2; // RETVAL
      java.io.StringWriter v3;
      v1 = null;
      VASTLog.d(TAG, "xmlDocumentToString");
      try
      {
        v2 = TransformerFactory.newInstance().newTransformer();
        v2.setOutputProperty("omit-xml-declaration", "no");
        v2.setOutputProperty("method", "xml");
        v2.setOutputProperty("indent", "yes");
        v2.setOutputProperty("encoding", "UTF-8");
        v2.setOutputProperty("{http://xml.apache.org/xslt}indent-amount", "4");
        v3 = new java.io.StringWriter();
        v2.transform(new javax.xml.transform.dom.DOMSource(p0), new javax.xml.transform.stream.StreamResult(v3));
        return v3.toString();
      }
      catch ( Exception v5 )
      {
        VASTLog.e(TAG, v5.getMessage(), v5);
      }
      return v1;
    }

    public static String xmlDocumentToString(org.w3c.dom.Node p0)
    {
      String v1;
      javax.xml.transform.Transformer v2; // RETVAL
      java.io.StringWriter v3;
      v1 = null;
      VASTLog.d(TAG, "xmlDocumentToString");
      try
      {
        v2 = TransformerFactory.newInstance().newTransformer();
        v2.setOutputProperty("omit-xml-declaration", "yes");
        v2.setOutputProperty("method", "xml");
        v2.setOutputProperty("indent", "yes");
        v2.setOutputProperty("encoding", "UTF-8");
        v2.setOutputProperty("{http://xml.apache.org/xslt}indent-amount", "4");
        v3 = new java.io.StringWriter();
        v2.transform(new javax.xml.transform.dom.DOMSource(p0), new javax.xml.transform.stream.StreamResult(v3));
        return v3.toString();
      }
      catch ( Exception v5 )
      {
        VASTLog.e(TAG, v5.getMessage(), v5);
      }
      return v1;
    }

}
