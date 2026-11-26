// Decompiled from classes.dex (SourceFile: VASTProcessor.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.processor;

import com.gameloft.glads.vast.util.VASTLog;
import com.gameloft.glads.vast.util.XmlTools;
import java.nio.charset.Charset;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.validation.SchemaFactory;
public final class VASTProcessor {
    // Fields
    private static boolean IS_VALIDATION_ON;
    private static int MAX_VAST_LEVELS;
    private static java.lang.String TAG;
    private com.gameloft.glads.vast.processor.VASTMediaPicker mediaPicker;
    private java.lang.StringBuilder mergedVastDocs;
    private com.gameloft.glads.vast.model.VASTModel vastModel;

    // Methods
    public VASTProcessor(com.gameloft.glads.vast.processor.VASTMediaPicker p0)
    {
      super();
      this.mergedVastDocs = new StringBuilder(500);
      this.mediaPicker = p0;
    }

    private org.w3c.dom.Document createDoc(java.io.InputStream p0)
    {
      String v2;
      org.w3c.dom.Document v3;
      v2 = "VASTProcessor";
      VASTLog.d("VASTProcessor", "About to create doc from InputStream");
      try
      {
        v3 = DocumentBuilderFactory.newInstance().newDocumentBuilder().parse(p0);
        v3.getDocumentElement().normalize();
        VASTLog.d("VASTProcessor", "Doc successfully created.");
        return v3;
      }
      catch ( Exception v5 )
      {
        VASTLog.e("VASTProcessor", v5.getMessage(), v5);
        return null;
      }
    }

    private void merge(org.w3c.dom.Document p0)
    {
      VASTLog.d("VASTProcessor", "About to merge doc into main doc.");
      this.mergedVastDocs.append(XmlTools.xmlDocumentToString(p0.getElementsByTagName("VAST").item(0)));
      VASTLog.d("VASTProcessor", "Merge successful.");
    }

    private int processUri(java.io.InputStream p0, int p1)
    {
      int v3;
      org.w3c.dom.Document Doc; // RETVAL
      org.w3c.dom.NodeList ElementsByTagName; // RETVAL
      org.w3c.dom.NodeList v7;
      String ElementValue;
      java.io.InputStream v9;
      v3 = 0;
      VASTLog.d("VASTProcessor", "processUri");
      if ( p1 >= 5 )
      {
        VASTLog.e("VASTProcessor", "VAST wrapping exceeded max limit of 5.");
        return 6;
      }
      Doc = this.createDoc(p0);
      if ( Doc == null )
        return 3;
      this.merge(Doc);
      ElementsByTagName = Doc.getElementsByTagName(com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS.vastAdTagURI.getValue());
      v7 = ElementsByTagName;
      if ( ElementsByTagName != null && ElementsByTagName.getLength() != 0 )
      {
        VASTLog.d("VASTProcessor", "Doc is a wrapper. ");
        ElementValue = XmlTools.getElementValue(v7.item(0));
        VASTLog.d("VASTProcessor", "Wrapper URL: " + ElementValue);
        try
        {
          v9 = new java.net.URL(ElementValue).openStream();
          v3 = this.processUri(v9, p1 + 1);
          try
          {
            v9.close();
          }
          catch ( java.io.IOException e )
          {
          }
          return v3;
        }
        catch ( Exception v10 )
        {
          VASTLog.e("VASTProcessor", v10.getMessage(), v10);
          return 2;
        }
      }
      return v3;
    }

    private boolean validateAgainstSchema(java.io.InputStream p0, java.io.InputStream p1)
    {
      String v3;
      v3 = "VASTProcessor";
      VASTLog.d("VASTProcessor", "About to validate doc against schema.");
      try
      {
        SchemaFactory.newInstance("http://www.w3.org/2001/XMLSchema").newSchema(new javax.xml.transform.stream.StreamSource(p1)).newValidator().validate(new javax.xml.transform.stream.StreamSource(p0));
        return true;
      }
      catch ( Exception e )
      {
        return false;
      }
    }

    private boolean validateAgainstSchema(org.w3c.dom.Document p0)
    {
      java.io.InputStream ResourceAsStream;
      boolean result; // RETVAL
    
      ResourceAsStream = com.gameloft.glads.vast.processor.VASTProcessor.class.getResourceAsStream("vast_2_0_1_schema.xsd");
      result = this.validateAgainstSchema(new java.io.ByteArrayInputStream(XmlTools.xmlDocumentToString(p0).getBytes()), ResourceAsStream);
      try
      {
        ResourceAsStream.close();
        return result;
      }
      catch ( java.io.IOException e )
      {
      }
      return result;
    }

    private org.w3c.dom.Document wrapMergedVastDocWithVasts()
    {
      String v1;
      VASTLog.d("VASTProcessor", "wrapmergedVastDocWithVasts");
      this.mergedVastDocs.insert(0, "<VASTS>");
      this.mergedVastDocs.append("</VASTS>");
      v1 = this.mergedVastDocs.toString();
      VASTLog.v("VASTProcessor", "Merged VAST doc:\n" + v1);
      return XmlTools.stringToDocument(v1);
    }

    public final com.gameloft.glads.vast.model.VASTModel getModel()
    {
      return this.vastModel;
    }

    public final int process(String p0)
    {
      java.io.ByteArrayInputStream v2;
      int v3; // RETVAL
      int v4;
      org.w3c.dom.Document v7; // RETVAL
    
      VASTLog.d("VASTProcessor", "process");
      this.vastModel = null;
      try
      {
        v2 = new java.io.ByteArrayInputStream(p0.getBytes(Charset.defaultCharset().name()));
        v3 = this.processUri(v2, 0);
        v4 = v3;
        try
        {
          v2.close();
        }
        catch ( java.io.IOException e )
        {
        }
        if ( v3 == 0 )
        {
          v7 = this.wrapMergedVastDocWithVasts();
          this.vastModel = new com.gameloft.glads.vast.model.VASTModel(v7);
          if ( v7 != null )
          {
            if ( VASTModelPostValidator.validate(this.vastModel, this.mediaPicker) )
              return 0;
            else
              return 5;
          }
          else
          {
            return 3;
          }
        }
        return v4;
      }
      catch ( java.io.UnsupportedEncodingException v6 )
      {
        VASTLog.e("VASTProcessor", v6.getMessage(), v6);
        return 3;
      }
    }

}
