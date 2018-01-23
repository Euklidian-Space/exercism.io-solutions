using System;

public static class Bob
{
	public static string Response(string statement)
	{
		switch (statement)
		{
			case "": 
				return "Fine. Be that way!";
			default:
				return "Whatever.";
		}
	}
}