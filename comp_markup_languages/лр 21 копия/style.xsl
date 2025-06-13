<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform"> 
 
<xsl:template match="/"> 
<html> 
<body> 
<h3>Мои данные</h3> 
<table border="2"> 
<tr bgcolor="plum"> 
<th>Фамилия</th> 
<th>Имя</th> 
<th>Дата рождения</th> 
<th>Год рождения</th> 
<th>Номер телефона</th> 
</tr> 
<tr> 
<td><xsl:value-of select="GROUP/STUDENT/FAMILY"/></td> 
<td><xsl:value-of select="GROUP/STUDENT/NAME"/></td> 
<td><xsl:value-of select="GROUP/STUDENT/DAY"/></td> 
<td><xsl:value-of select="GROUP/STUDENT/YEAR"/></td> 
<td><xsl:value-of select="GROUP/STUDENT/NUMBER"/></td> 
</tr> 
</table> 
</body> 
</html> 
</xsl:template> 
</xsl:stylesheet>