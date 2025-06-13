<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/"> 
<html> 
<body> 
<h2>Анкета</h2> 
<br/>
<p>Фамилия: </p> 
<xsl:value-of select="anket/first_name"/>
<br/>
<p>Имя: </p> 
<xsl:value-of select="anket/second_name"/>
<br/>
<p>Отчество: </p> 
<xsl:value-of select="anket/surname"/>
</body> 
</html> 
</xsl:template> 
</xsl:stylesheet>